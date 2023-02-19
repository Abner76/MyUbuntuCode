#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    cin >> name;
    // 使用 cin 连续输入 HanZhe Pie 将不会执行第二条 cin
    // cin 使用空白来（换行，空格，制表符）来确认当前已经输入结束，确定输入结束的位置
    // cin 是一个队列，将输入的内容用空格隔开，并且放入队列中，当需要 cin 时，将自动从队列中读取
    // 如果队列为空时，才再次等待用户输入。
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I hace some delicious " << dessert;
    cout << " for you, " << name << ".\n";

    return 0;
}