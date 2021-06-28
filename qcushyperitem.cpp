#include "qcushyperitem.h"

QCusHyperItem::QCusHyperItem()
{
    qsrand(time_t(NULL));
    connect(this,SIGNAL(countChanged()),this,SLOT(dealCountChanged()));
}

void QCusHyperItem::paint(QPainter *painter)
{
    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->drawPath(pointPath);
    painter->setPen(QPen(Qt::red, 3, Qt::SolidLine));
    painter->drawPoints(polyPoints);
//    painter->drawLine(20,20,40,40);
}

int QCusHyperItem::getPointCount() const
{
    return iTotalPoint;
}

void QCusHyperItem::setPointCount(const int &i)
{
    this->iTotalPoint = i;
    update();
    emit countChanged();
}

void QCusHyperItem::dealCountChanged()
{
    polyPoints.clear();
//    int itemWidth = contentsBoundingRect().width();
//    int itemHeight = contentsBoundingRect().height();
    for(int i = 0;i < iTotalPoint;i ++)
    {
        QPoint aimPoint = QPoint(qrand() % 1920,qrand() % 1080);
        polyPoints.append(aimPoint);
    }
    pointPath = QPainterPath(polyPoints[0]);
    for(int i = 0;i < iTotalPoint - 1;i ++)
    {
        int c1X =  (polyPoints[i].x() + polyPoints[i + 1].x()) / 2;
        int c1Y = polyPoints[i].y();
        int c2X = (polyPoints[i].x() + polyPoints[i + 1].x()) / 2;
        int c2Y = polyPoints[i + 1].y();
        pointPath.cubicTo(c1X,c1Y,c2X,c2Y,polyPoints[i + 1].x(),polyPoints[i + 1].y());
    }
}
