/**
  * 文件存储为 utf8 bom， console 65001, cout 输出中文字符串
  */

#include <iostream>

#pragma execution_character_set("utf-8")
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    cout << "中文测试" << std::endl;
    return 0;
}
