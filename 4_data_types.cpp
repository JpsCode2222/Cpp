#include <iostream>
using namespace std;
int main()
{
    // int a;    // 4byte  10
    // signed int a; // store positive or negative integer numbers  -10 or 10
    // unsigned int a; // store only positive integers; 10 (positive numbers only)
    // char a;   // 1byte A or a
    // float a;  // 4byt 3.14
    // double a; // 8byte 84839383994
    // bool a; // two values true or false user for conditional statements
    bool a = true;
    cout << a;

    // To check size of variable use : sizeof()    (in byte)
    cout << sizeof(a);

    return 0;
}
