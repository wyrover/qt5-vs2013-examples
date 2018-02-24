#ifndef MYLABEL_H
#define MYLABEL_H

#include <QWidget>

namespace Ui {
class MyLabel;
}

class MyLabel : public QWidget
{
    Q_OBJECT

public:
    explicit MyLabel(QWidget *parent = 0);
    ~MyLabel();

private:
    Ui::MyLabel *ui;
};

#endif // MYLABEL_H
