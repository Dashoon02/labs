#include "shape.h"

int globalVariable=1;

shape::shape(QObject*parent):QObject(parent),QGraphicsItem()
{

}
void shape:: mouseMoveEvent(QGraphicsSceneMouseEvent*event)
{
    this->setPos(mapToScene(event->pos()));
}
void shape:: mousePressEvent(QGraphicsSceneMouseEvent*event)
{
    this->setCursor(Qt::ClosedHandCursor);
    this->setZValue(globalVariable);
    globalVariable++;
    Q_UNUSED(event);
}
void shape:: mouseReleaseEvent(QGraphicsSceneMouseEvent*event)
{
    this->setCursor(Qt::ArrowCursor);
    Q_UNUSED(event);
}
