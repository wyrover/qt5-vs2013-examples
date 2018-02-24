#include "mainwindow.h"
#include "draggable.h"
#include "logindlg.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

//    Draggable d;
//    d.show();


    LoginDlg loginDlg;
    loginDlg.show();

    return a.exec();
}
