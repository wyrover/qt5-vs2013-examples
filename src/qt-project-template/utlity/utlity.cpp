#include "utlity.h"
#include <iostream>
#include <QtCore/QtDebug>
#if QT_VERSION >= QT_VERSION_CHECK(5,0,0)
    #if defined(_MSC_VER) && (_MSC_VER > 1600)
        // Coding: UTF-8
        #pragma execution_character_set("utf-8")
    #endif
#endif

Utlity::Utlity()
{
}

void Utlity::test1()
{
    std::cout << "中文测试" << std::endl;
	qDebug() << QString::fromUtf8("中文测试");
}
