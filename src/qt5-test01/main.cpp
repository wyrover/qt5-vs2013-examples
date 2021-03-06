#include <QCommandLineParser>
#include <QCoreApplication>
#include <QDebug>
#include <QTextCodec>
#include <iostream>
#include <stdio.h>

#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    #if defined(_MSC_VER) && (_MSC_VER > 1600)
        // Coding: UTF-8
        #pragma execution_character_set("utf-8")
    #endif
#endif

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    app.setApplicationName("Test");
    app.setOrganizationName("test");

    QCommandLineParser parser;



#ifdef  _MSC_VER
    std::cout << "hello world!" << std::endl;
#endif
    QString str1 = QString::fromUtf8("中文测试");
    QByteArray ba = str1.toLocal8Bit();
    std::cout << ba.data() << std::endl;
    qDebug() << "中文测试";
    qDebug()  << QString::fromUtf8("你好");
    qDebug() << "a:" << QString("你好") << QString::fromUtf8("我好");
    return app.exec();
}
