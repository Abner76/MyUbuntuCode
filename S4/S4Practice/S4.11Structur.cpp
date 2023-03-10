// using the C++ struct and memberwise assignment,
// 结构体变量可以互相命名
#include <iostream>
#include <cstring>

struct inflatable
{
    /* data */
    char name[20];
    float vol;
    double price;
    std::string name2;  // 将 std 声明放在定义结构体之前
};


int main()
{
    using namespace std;
    inflatable guest = 
    {
        "Gold",
        1.88,
        32.99,
    };
    inflatable pal =
    {
        "Han",
        3.12,
        32.99,
    };
    inflatable han = {"H", 0, 0, "shiwoya"};
    // inflatable zhe {"ZZ"};  // C++11 允许
    inflatable zhe = han;  // assign one structure to another

    cout << guest.name << guest.vol << guest.price << endl;
    cout << pal.name << pal.vol << pal.price << endl;
    cout << guest.vol + pal.vol << endl;
    cout << han.name2 << endl;
    cout << han.price << endl;
    cout << "zhe sizeof: " << sizeof(zhe.name2) << endl;  // 计算字节大小
    cout << "zhe lenth(): " << zhe.name2.length() << endl;  // 计算字符串长度
    cout << "zhe len2: " << zhe.name2 << endl;
    return 0;
}