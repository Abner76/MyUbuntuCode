#include <iostream>

using namespace std;

double exchangeTemp(double);

int main()
{
    double celsius;
    cout << "Enter a light years:" << endl;
    cin >> celsius;
    // cout << "Your age in months is " << exchangeTemp(celsius) << "." << endl;
    cout << celsius << " light years is " << exchangeTemp(celsius) << " astronomical units." << endl;
    return 0;
}

double exchangeTemp(double celsius)
{
    return celsius * 63240;
}