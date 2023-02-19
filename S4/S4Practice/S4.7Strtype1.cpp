// using the C++ string class
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    char charr1[20];
    string str1;
    string str2 = "hanzhe2";

    cout << "This is String2:" << str2 << endl;
    cout << "This is String2[2]:" << str2[2] << endl;
    cin >> str1;
    cout << "This is String1:" << str1 << endl;
    cout << "This is String1[2]:" << str1[2] << endl;
    // 程序会自动处理 string 类型变量的大小, 将大小为 0 的变量初始化为其他长度. 自动调整 str1 的长度

}