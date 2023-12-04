#include "rect.h"

rect1::rect1(QObject*parent):shape(parent)
{

}

 QRectF rect1:: boundingRect()const
 {
     return QRectF(-30,-30,60,60);
 }

 void rect1::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
 {
     painter->setPen(Qt::black);
     painter->setBrush(Qt::blue);
     painter->drawRect(-30,-30,60,60);
     Q_UNUSED(option);
     Q_UNUSED(widget);
 }
