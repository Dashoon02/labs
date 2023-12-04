#ifndef CIRCLE_H
#define CIRCLE_H
#include<libraries.h>
#include<shape.h>
class circle:public shape
{
public:
    circle(QObject*parent=0);
private:
    QRectF boundingRect()const;
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *option,QWidget*widget);

};

#endif // CIRCLE_H
