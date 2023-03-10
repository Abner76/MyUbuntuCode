// Anonymous Union 匿名共用体

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
    union
    {
        unsigned int id1;
        char id_char[20];
    };  
};


int main()
{
    widget guests[10] = 
    {
        {"Han", 1.1, 2.2, "Zhe", 7233},
        {"Zhao", 99.99, 199.99, "Yang"},
    };

    
    cout << guests[0].price + guests[1].price << endl;

    cout << "ID1:" << guests[0].id1 << endl;  //7625
    cout << "ID2:" << guests[0].id_char << endl;  //201

    return 0;
}