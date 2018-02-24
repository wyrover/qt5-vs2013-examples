# qt5-vs2013-examples

1. vc平台下，qtcreator 默认使用无 bom 的 utf8 编码， vc 编译使用以下宏，不用做其他设置, cout 输出见 qt5-test01 例子，console 输出设置 chcp 65001
不能直接 cout 中文字符串，如果 cpp 文件保存为带 bom 的 utf8 编码，则 console 输出不用切换到 65001 代码页。

2. 文件存储为 utf8 bom， console 65001, cout 直接输出中文字符串，qt5-test03 例子

``` cpp
#ifdef  _MSC_VER
    #pragma execution_character_set("utf-8")
#endif


3. 创建子目录项目 qt5-test05  子项目 qt5-test05/test5