#include <iostream>

int main()

{
    using namespace std;

    cout << "Hello" << endl;
    
    short mounths[12];
    mounths[1] = 1;
    cout << mounths[0] << endl;
    
    cout << sizeof mounths / sizeof (short) << endl;

    char name[] = "HanZhe";
    cout << name << endl;

    char name1 = 'a';
    char * p_name1 = "aadadf";

    cout << "name1:" << name1 << endl;
    cout << "p_name1:" << *p_name1 << endl;


    return 0;
}
