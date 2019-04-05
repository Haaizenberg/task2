#include "widget.h"
#include "ui_widget.h"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget(){};

void Widget::on_Search_button_clicked()
{
    ui->result_list->clear();

    QString input_string = ui->string_for_edit->text();

    QStringList words = input_string.split(' ', QString::SkipEmptyParts);

    words.sort();
    int i = 0;
    int k = 1;
    while (i !=  words.count()-1) {
        if (words[i] == words[i+1])
            k++;
        else if (words[i] != words[i+1]) {
            ui->result_list->append(QString("%1 - %2").arg(words[i]).arg(k));
            k = 1;
        }
        i++;
    }
    i =  words.count() - 1;
    ui->result_list->append(QString("%1 - %2").arg(words[i]).arg(k));
}
