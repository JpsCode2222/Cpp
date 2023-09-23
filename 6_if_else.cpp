#include <iostream>
using namespace std;
int main()
{
    // // Ex.1
    // int age = 14;
    // // Conditional Statement
    // if (age < 18)
    // {
    //     cout << "Not Vote";
    // }
    // else
    // {
    //     cout << "Vote";
    // }

    // Ex.2
    // num = positive , negative , zero
    int num = 0;
    if (num < 0)
    {
        cout << "Negative";
    }
    else
    {
        // Manage two conditions in else
        if (num > 0)
        {
            cout << "Positive";
        }
        else
        {
            cout << "Zero";
        }
    }

    return 0;
}