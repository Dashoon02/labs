#ifndef SHAPE_H
#define SHAPE_H

#include<libraries.h>

extern int globalVariable;

class shape:public QObject,public QGraphicsItem
{
public:
    int k=1;
    shape(QObject*parent=0);
    void mouseMoveEvent(QGraphicsSceneMouseEvent*event) override;
    void mousePressEvent(QGraphicsSceneMouseEvent*event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent*event) override;
};

#endif // SHAPE_H
#ifndef SHAPE_H
#define SHAPE_H

#endif // SHAPE_H
