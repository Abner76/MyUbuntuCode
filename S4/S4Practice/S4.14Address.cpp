// using the & operator to find addresses

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int dnouts = 4;
    double cups = 3.5;
    
    cout << "Dnouts's address:" << &dnouts << endl;
    cout << "cups's address:" << &cups << endl;
    return 0;
}