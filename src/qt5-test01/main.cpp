#include <QCoreApplication>
#include <QDebug>
#include <QTextCodec>
#include <iostream>
#include <stdio.h>

#ifdef  _MSC_VER
    #pragma execution_character_set("utf-8")
#endif

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
#ifdef  _MSC_VER
    std::cout << "hello world!" << std::endl;    
#endif

    QString str1 = QString::fromUtf8("中文测试");
    QByteArray ba = str1.toLocal8Bit();

    std::cout << ba.data() << std::endl;
    qDebug() << "中文测试";

    qDebug()  << QString::fromUtf8("你好");

    qDebug() << "a:" << QString("你好") << QString::fromUtf8("我好");
    return a.exec();
}
