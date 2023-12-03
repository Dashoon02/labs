#ifndef MY_WIDGET_H
#define MY_WIDGET_H

#include <QWidget>
#include <QApplication>
#include <QVBoxLayout> //???? ????? ???????????? ??? ???????? ???????? ???????????? ??????????.
#include <QPushButton>
#include <vector>

QT_END_NAMESPACE

class My_Widget : public QWidget
{
    Q_OBJECT

public:
   My_Widget();

private:
   std::vector<QWidget*> my_vector;
   QVBoxLayout *my_layout;
   QLayout *layout_widgets;
   QPushButton *add_widgets;
   QPushButton *remove_widgets;

   int widgetCounter;

   void connect_widgets(QWidget* w);
   void disconnect_widgets(QWidget* w);

private slots:
   void add_widget();
   void remove_widget();
   void change_value(int value);

signals:
   void send_text(const QString& text);
   void send_value(int value);
};

#endif // MY_WIDGET_H
