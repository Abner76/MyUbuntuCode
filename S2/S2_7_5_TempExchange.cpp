#include <iostream>

using namespace std;

float exchangeTemp(float);

int main()
{
    int celsius;
    cout << "Enter a Celsius value:" << endl;
    cin >> celsius;
    // cout << "Your age in months is " << exchangeTemp(celsius) << "." << endl;
    cout << celsius << " degrees Celsius is " << exchangeTemp(celsius) << " degrees Fahrenheit." << endl;

    return 0;
}

float exchangeTemp(float celsius)
{
    return celsius * 1.8 + 32.0;
}