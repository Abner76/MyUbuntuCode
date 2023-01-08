// 英镑转化为
#include <iostream>

int stonetolb(int);

int main()
{
    using namespace std;

    int stone;
    cout << "Enter" << endl;
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    cout << "=========" << endl;
    cout << stonetolb(100) << endl;
    return 0;
}

int stonetolb(int stone)
{
    using namespace std;
    cout << "I am func()." << endl;
    return stone * 14;
}