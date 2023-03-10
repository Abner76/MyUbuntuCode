#include <iostream>

using namespace std;

int main()
{
    int higgens = 5;
    int * pt = &higgens;

    cout << "Value: higgens = " << higgens;
    cout << ", Value: *pt = " << *pt << endl;

    cout << "Address: &higgens = " << &higgens;
    cout << ", Address: pt = " << pt << endl;

    return 0;
}