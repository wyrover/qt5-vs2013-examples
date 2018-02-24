#ifndef BASEDIALOG_H
#define BASEDIALOG_H


#include<QDialog>
#include<QMouseEvent>

class BaseDialog :public QDialog
{
    Q_OBJECT
public:
    explicit BaseDialog(QWidget* parent =0);
    ~BaseDialog();
protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);
protected:
    bool max;
    QPoint mousePoint;
    bool mousePressed;
};
#endif // BASEDIALOG_H
