// 使用 cin.get(arr, ArSize) 来获取对应是长度，并读入到 arr 中。
// cin.get() 使用换行符来判断结束。

// 但是会保留换行符，如果使用连续的get()读取时，第二个get()只能读取到一个换行符，这时候会发生错误
// 因此使用 get(name1, ArSize).get() 来避免这个错误。将输入读取到name1中，并且在读取一次get()，规避换行符。
// cin.get(name, ArSize)返回一个对象，随即调用get()
// C++ 允许函数有多个版本，条件是这些版本的参数列表不同。----函数重载
/*########################################################
[root@iZ2zebmri8fdr589x5tebvZ S4Practise]# ./a.out 
Enter your name:
ha
Enter your favorite dessert:
I hace some delicious  for you, ha.
########################################################*/

// 如果长度为20，则只能获取到19个长度的字符，因为最后一个字符用来保存 \0
// cin.get(name1, 20).get();
#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 3;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin.get(name, ArSize).get(); // cin >> name;
    
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, ArSize).get(); //cin >> dessert;
    cout << "I hace some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}