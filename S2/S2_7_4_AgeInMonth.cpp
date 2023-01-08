#include <iostream>

using namespace std;

int exchangeAgeToMonth(int);

int main()
{
    int ages;
    cout << "Enter your age:" << endl;
    cin >> ages;
    cout << "Your age in months is " << exchangeAgeToMonth(ages) << "." << endl;

    return 0;
}

int exchangeAgeToMonth(int ages)
{
    return ages * 12;
}