//
//  main.cpp
//  TransferStringAndInt
//
//  Created by chenyufeng on 9/28/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

int main(int argc, const char * argv[])
{
    // 可以使用ostringstream把int型输入到流中，然后转化为字符串；
    ostringstream os; // 字符串输出流
    int i = 123;
    os << "Hello" << i;
    cout << os.str() << endl;

    os << i;
    cout << os.str() << endl;

    os << "World";
    cout << os.str() << endl;


    // 用istringstream对象读一个字符串
    istringstream is; // 字符串输入流
    is.str("567");
    int j;
    is >> j;
    cout << j << endl;


    // string-->int
    // 注意:atoi()里面只能传递const char类型，所以需要把string转化为const char
    string str = "789";
    int str2int = atoi(str.c_str());
    cout << str2int << endl;

    // int-->srting，Xcode中不能使用itoa这个函数，因为这个函数没有定义在标准C++里，但是在有些编译器里可以使用，所以这里推荐使用sprintf
    char eeeee[10];
    sprintf(eeeee,"%d",444);
    cout << string(eeeee) << endl;

    // string -> char *
    string str3 = "chenyufeng";
    const char *str3ToChar;
    str3ToChar = str3.c_str();

    // char * -> string
    char *str4 = "yufeng";
    string str5(str4);
    cout << str5 << endl;

    return 0;
}
