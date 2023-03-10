// Union

#include <iostream>
#include <cstring>

using namespace std;

struct widget 
{
    /* data */
    char name[20];
    float vol;
    double price;
    string name2;  // 将 std 声明放在定义结构体之前, 否则需要使用 std::string
};

union id
{
    unsigned int id1;
    unsigned char id2;

} id_val;

int main()
{
    widget guests[10] = 
    {
        {"Han", 1.1, 2.2, "Zhe"},
        {"Zhao", 99.99, 199.99, "Yang"},
    };

    id id_union = 
    {
        7625,  // 只允许定义一个变量。
    };

    cout << guests[0].price + guests[1].price << endl;

    cout << "ID1:" << id_union.id1 << endl;  //7625
    cout << "ID2:" << int(id_union.id2) << endl;  //201

    return 0;
}