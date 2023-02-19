// following number input with line input
#include <iostream>

int main()
{
    using namespace std;
    cout << "What year was your house built?\n";
    int year;
    (cin >> year).get(); // cin >> year; 
    // 使用 cin 将获取到换行符，赋值给address，因此使用get()删除换行符并丢弃。
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done\n";

    return 0;

}