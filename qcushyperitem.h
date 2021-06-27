#ifndef QCUSHYPERITEM_H
#define QCUSHYPERITEM_H

#include <QQuickPaintedItem>
#include <QPainter>

class QCusHyperItem : public QQuickPaintedItem
{
    Q_OBJECT    //使用元对象
    Q_PROPERTY(int totalPoints
               READ getPointCount WRITE setPointCount
               NOTIFY countChanged)
public:
    QCusHyperItem();
    void paint(QPainter* painter);
    int getPointCount() const;
    void setPointCount(const int& );
signals:
    void countChanged();
private:
    int iTotalPoint;
};

#endif // QCUSHYPERITEM_H
