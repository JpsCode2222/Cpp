#include <iostream>
using namespace std;
// // Passbyvalue -> does not change actual number
int passByValue(int num)
{
    num++;
}

// // PassbyRefference -> actual value change using funciton
// // add & address to the parameter
int passByRefference(int &num)
{
    num++;
}

// // Eg1. To swap Two numbers we use passByRefference methodology
void swap(int &x, int &y)
{
    int d = y - x;
    x = x;
    y = d;
}

int main()
{
    int a = 10, b = 20, c = 30;
    cout << a;
    passByValue(a);
    cout << a; // 10
    passByRefference(a);
    cout << a; // 11
    swap(b, c);
    cout << b << " " << c;
    return 0;
}