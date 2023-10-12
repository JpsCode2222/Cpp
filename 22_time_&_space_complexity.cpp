// Time Complexity & Space complexity
// Total Time tacken by algorithm
// Total Space tacken by algo
// Best Case       denoted by ->omega
// Average Case                 thita
// Worst Case                   big o

#include <iostream>
using namespace std;
int main()
{
    // // Eg 1]  TC = O(10) -> O(1)
    // for (int i = 1; i < 10; i++)
    // {
    //     cout << "Hello" << endl;
    // }

    // // Eg 2] TC = O(n)
    // int n = 2;
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "Hello" << endl;
    // }

    // // Eg 3] TC = log base 2 n
    // // i=1^k -> i=2^k -> i=4^k...
    // // n = 2k
    // // logn = k log 2
    // // k = log n / log 2
    // // k = log base 2 n
    // // i can inc by double itself
    // // if i can be triple times so TC = log base 3 n
    // int n = 10;
    // for (int i = 1; i <= n; i = i * 2)
    // {
    //     cout << "Hello" << endl;
    // }

    // // Eg 4] TC = O(n^3)
    // // outer loop n/2
    // // inner loop n/2
    // // inside loop n
    // // n/2 * n/2 * n = 2 n^3 = egnore constant means res = n^3
    // for (int i = n/2; i <= n; i++)
    // {
    //     for (int j = 1; j <= n / 2; i++)
    //     {
    //         for (int k = 1; k <= n; k++)
    //         {
    //             cout << "Hello" << endl;
    //         }
    //     }
    // }

    // // Eg 5] TC = n(log b2 n)^2
    // // loops are not dependent on inner loop so
    // // n/2 * log b2 n * log b2 n => n(log b2 n)^2
    // for (int i = n / 2; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j = j * 2)
    //     {
    //         for (int k = 1; k <= n; k = k * 2)
    //         {
    //             cout << "Hello" << endl;
    //         }
    //     }
    // }

    // Complexity from worst to best
    O(n !)
    O(2 ^ n)
    O(n ^ 3)
    O(n ^ 2)
    O(nlogn)
    O(n)
    O(rootn)
    O(logn)
    O(1)

    return 0;
}
