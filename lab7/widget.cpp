#include "widget.h"
#include "ui_widget.h"
#include<iostream>
static int randomBetween(int low, int high)
{
    return (qrand() % ((high + 1) - low) + low);
}
Widget::Widget(QWidget *parent)
    : QWidget(parent)

{
    setFixedSize(1000,500);
    QVBoxLayout *layout=new QVBoxLayout();
    QHBoxLayout*layout_btn=new QHBoxLayout();
    QHBoxLayout*layout_view=new QHBoxLayout();
    layout_btn->addWidget(btn1);
    layout_btn->addWidget(btn2);
    layout_view->addWidget(view);
    layout->addLayout(layout_btn);
    layout->addLayout(layout_view);
    scene->setSceneRect(100,100,200,300);
    setLayout(layout);
    view->setScene(scene);
    QObject::connect(btn1,SIGNAL(clicked()),this,SLOT(add_item()));
    QObject::connect(btn2,SIGNAL(clicked()),this,SLOT(remove_item()));
}

void Widget::add_item()
{
    if (count_widgets == 0) {
        items.push_back(new circle(this));
    } else if (count_widgets == 1) {
        items.push_back(new rect1(this));
    } else {
        items.push_back(new triangle(this));
    }
    items.back()->setPos(randomBetween(30,470),randomBetween(30,470));
    scene->addItem(items.back());

    count_widgets = (count_widgets + 1) % 3;
}
void Widget::remove_item()
{
    scene->removeItem(scene->items().last());
    count_widgets--;
}

