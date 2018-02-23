# qt5-vs2013-examples

qtcreator 默认使用无 bom 的 utf8 编码， vc 编译使用以下宏，不用做其他设置, cout 输出见 qt5-test01 例子，console 输出设置 chcp 65001

``` cpp
#ifdef  _MSC_VER
    #pragma execution_character_set("utf-8")
#endif
