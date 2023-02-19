 // 学习 sizeof 和 strlen() 的区别，
 // 前者返回整体数组的大小，后者返回字符串的长度
 #include <iostream>
 #include <cstring>
 #include <string>

 int main()
 {
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";
    
    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout <<"Well, " << name1 << ", your name has ";
    
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an arrat of " << sizeof(name1) << " bytes.\n";
    cout << "Your initial is " << name1[0] << " .\n";

    name2[3] = '\0'; // set to null character
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;


    return 0;
 }