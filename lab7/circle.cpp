#include "circle.h"

circle::circle(QObject*parent):shape(parent)
{

}

QRectF circle::boundingRect() const
{
    return QRectF(-100,-100,60,60);//can giai thich
}
void circle::paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget*widget)
{
    painter->setPen(Qt::black);
    painter->setBrush(Qt::green);
    painter->drawEllipse(-100,-100,60,60);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}


