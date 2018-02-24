#include "basedialog.h"

BaseDialog::BaseDialog(QWidget* parent):QDialog(parent), max(false), mousePressed(false)
{

}

BaseDialog::~BaseDialog()
{

}
void BaseDialog::mousePressEvent(QMouseEvent *e)
{
    if (e->button() == Qt::LeftButton) {
            mousePressed = true;
            mousePoint = e->globalPos() - this->pos();
            e->accept();
        }
}

void BaseDialog::mouseMoveEvent(QMouseEvent *e)
{
    if (mousePressed && (e->buttons() && Qt::LeftButton) && !max) {
           this->move(e->globalPos() - mousePoint);
           e->accept();
       }
}

void BaseDialog::mouseReleaseEvent(QMouseEvent *e)
{
    mousePressed = false;
}
