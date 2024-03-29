#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QString>
#include <QFileDialog>
#include <iostream>
#include <QTextStream>


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_Search_button_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
