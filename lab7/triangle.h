#ifndef TRIANGLE_H
#define TRIANGLE_H
#include<shape.h>
#include<libraries.h>
class triangle:public shape
{
public:
    triangle(QObject*parent);
private:
    QRectF boundingRect()const;
    void paint(QPainter*painter,const QStyleOptionGraphicsItem *option,QWidget *widget);


};

#endif // TRIANGLE_H
