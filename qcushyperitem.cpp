#include "qcushyperitem.h"

QCusHyperItem::QCusHyperItem()
{

}

void QCusHyperItem::paint(QPainter *painter)
{
    painter->drawLine(20,20,40,40);
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
