// arrstructures -- an arry of structures
// 结构数组,
// 想明白命名方法, 指针数组, 数组指针, 指针函数, 函数指针等等.
// 指针函数 -- 返回值是指针的函数
// 函数指针 -- 该函数头所在的地址
#include <iostream>
#include <cstring>

using namespace std;

struct inflatable
{
    /* data */
    char name[20];
    float vol;
    double price;
    string name2;  // 将 std 声明放在定义结构体之前, 否则需要使用 std::string
};


int main()
{
    inflatable guests[10] = 
    {
        {"Han", 1.1, 2.2, "Zhe"},
        {"Zhao", 99.99, 199.99, "Yang"},
    };

    cout << guests[0].price + guests[1].price << endl;
    return 0;
}