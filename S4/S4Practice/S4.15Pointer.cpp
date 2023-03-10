// using the & operator to find addresses
// first pointer varibale

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int upgrate = 6;
    int * p_upgrate;
    p_upgrate = & upgrate;  // 初始化指针
    
    //express values two way
    cout << "Value1: upgrate: " << upgrate << endl;
    cout << "Value2: * p_upgrate: " << * p_upgrate << endl;

    //express address two way
    cout << "Address1: p_upgrate:" << p_upgrate << endl;
    cout << "Address2: & upgrate:" << & upgrate << endl;

    //use pointer to change value
    *p_upgrate = *p_upgrate + 1;
    cout << "Now upgrate is " << upgrate << endl;

    return 0;
}