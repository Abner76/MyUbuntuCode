#include <iostream>

using namespace std;

float exchange(float);

int main()
{
    int longs;
    cout << "Enter distance with long" << endl;
    cin >> longs;
    cout << longs << " longs =" << exchange(longs) << " m." << endl;
    return 0;
}

float exchange(float longs)
{
    return longs / 220;
}