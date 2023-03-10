// using the new operator
#include <iostream>
using namespace std;

int main()
{
    int nights = 1001;
    int* pt = new int;  // 使用 new, 将自动在内存中为 pt 初始化一个地址.
    *pt = 1001;

    // 危险的指针, 不要这样使用. 在因为 fellow 没有被初始化.
    // int * fellow;
    // * fellow = 10000;

    cout << "nights's value: nights = " << nights << endl;
    cout << "*pt value: nights = " << *pt << endl;

    cout << "Address &nights = " << & nights << endl;
    cout << "Address pt = " << pt << endl;
    
    double* pn = new double;
    *pn = 1000000001;
    cout << "*pn value: nights = " << *pn << endl;
    cout << "Address pn = " << pn << endl;

    // 比较指针变量的长度, 比较指针指向的变量的长度
    cout << "size of pt: " << sizeof(pt) << endl;
    cout << "size of pn: " << sizeof(pn) << endl;
    cout << "size of *pt: " << sizeof(*pt) << endl;
    cout << "size of *pn: " << sizeof(*pn) << endl;


    return 0;
}