// 使用 cin.getline(arr, ArSize) 来获取对应是长度，并读入到 arr 中。
// cin.getline() 使用换行符来判断结束。
// 并且自动将换行符转换为\0
// 如果长度为20，则只能获取到19个长度的字符，因为最后一个字符用来保存 \0
// cin.getline(name1, 10).getline(name2, 10);
#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 3;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.getline(name, ArSize); // cin >> name;
    
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize); //cin >> dessert;
    cout << "I hace some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}