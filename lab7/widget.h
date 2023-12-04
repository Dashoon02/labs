#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>
#include<QtWidgets>
#include<libraries.h>
#include<rect.h>
#include<circle.h>
#include<triangle.h>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
private:
   QPushButton*btn1=new QPushButton("add shape",this);
   QPushButton*btn2=new QPushButton("remove shape",this);
   QGraphicsScene*scene=new QGraphicsScene(this);
   QGraphicsView*view=new QGraphicsView(this);
   std::vector<QGraphicsItem*> items; // ?????? ??? ???????? ?????????? ?? ????????? ???????
   int count_widgets = 0;

private slots:
   void add_item();
   void remove_item();
};
#endif // WIDGET_H
