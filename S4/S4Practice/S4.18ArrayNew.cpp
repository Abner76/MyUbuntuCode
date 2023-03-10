// using the new operator
#include <iostream>
using namespace std;

int main()
{
    double * pa_double = new double[3];
    pa_double[0] = 0.2;
    pa_double[1] = 0.5;
    pa_double[2] = 0.8;

    cout << "pa_double[0] is " << pa_double[0] << endl;
    pa_double = pa_double + 1;

    cout << "pa_double[0] is " << pa_double[0] << endl;
    pa_double = pa_double - 1;

    // 释放申请的内存
    delete [] pa_double;

    return 0;
}