#include "triangle.h"

triangle::triangle(QObject*parent):shape(parent)
{

}

QRectF triangle::boundingRect()const
{
    return QRectF(-50, -50, 100, 100);
}
void triangle::paint(QPainter*painter,const QStyleOptionGraphicsItem *option,QWidget *widget)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::yellow);
    QPoint a(-50, 50);
    QPoint b(50, 50);
    QPoint c(0, -50);
    QPoint points[3]={a,b,c};
    painter->drawPolygon(points,3);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

