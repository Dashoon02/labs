#ifndef RECT_H
#define RECT_H
#include<shape.h>
#include<libraries.h>
class rect1:public shape
{

public:
    rect1(QObject*parent=0);
private:
    QRectF boundingRect()const;
    void paint(QPainter*painter,const QStyleOptionGraphicsItem *option,QWidget*widget);


};

#endif // RECT_H
