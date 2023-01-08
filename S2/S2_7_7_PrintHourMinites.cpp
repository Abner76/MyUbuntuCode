#include <iostream>

using namespace std;

void printHourAndMin(int, int);

int main()
{
    int hour;
    int mins;
    cout << "Enter a value of hour:" << endl;
    cin >> hour;
    cout << "Enter a value of min:" << endl;
    cin >> mins;

    printHourAndMin(hour, mins);

    return 0;
}

void printHourAndMin(int hour, int min)
{
    cout << "Time: " << hour << ":" << min << endl;
}