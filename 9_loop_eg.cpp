#include <iostream>
using namespace std;
int main()
{
    // // Eg.1
    // // Print A to Z
    // char name;
    // for (name = 'A'; name <= 'Z'; name++) // name++ or name = name + 1 but not   X (name+1) only
    // {
    //     cout << name << endl;
    // }

    // // Eg.2
    // // Print Reverse Number from 100 to 1
    // int num = 100;
    // for (int i = num; i >= 1; i = i - 1)
    // {
    //     cout << i << " ";
    // }

    // // Eg.3
    // // Print number between 1 to 100 each number difference is 3
    // // 1  4  7  10 ...
    // int num = 100;
    // for (int i = 1; i <= num; i = i + 3)
    // {
    //     cout << i << endl;
    // }

    // // Eg.4
    // // Print all numbers upto 100 means 99
    // int num = 100;
    // for (int i = 1; i < num; i++)
    // {
    //     cout << i << " ";
    // }

    // // Eg.5
    // // Print table of given nuber
    // int num = 10;
    // for (int i = 1; i <= num; i++)
    // {
    //     cout << num * i << " ";
    // }

    // // Eg.6
    // // Calculate power of num
    // int num = 2;
    // int power = 3;
    // int pow = 1;
    // for (int i = 1; i <= power; i++)
    // {
    //     pow *= num;
    // }
    // cout << pow;

    // // Eg.7
    // // Sum of n natural number
    // int n = 100, sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    // cout << sum << " ";
    // // OR
    // // use formula n*(n+1)/2
    // sum = n * (n + 1) / 2;
    // cout << sum << " ";

    // // Eg.8
    // // Factorial of given number
    // // fact = 5
    // //  1 * 2 * 3 * 4 * 5  = 120
    // int num = 5;
    // int fact = 1;
    // for (int i = 1; i <= num; i++)
    // {
    //     fact *= i;
    // }
    // cout << fact;

    // // Eg.9
    // // Prime number
    // // number divide by only that number and 1 number
    // int num = 2;

    // if (num < 2)
    // {
    //     cout << "Not Prime";
    // }
    // else
    // {
    //     for (int i = 2; i < num; i++)
    //     {
    //         if (num % i == 0)
    //         {
    //             cout << "Not Prime";
    //             return 0;
    //         }
    //     }
    //     cout << "Prime";
    // }

    // // Eg.10
    // // Fibonachi Series
    // // 0 1 1 2 3 5 8 ...
    // int num = 10;
    // if (num < 1)
    // {
    //     cout << "Enter Valid Number !";
    // }
    // else
    // {
    //     if (num == 1)
    //     {
    //         cout << "0";
    //     }
    //     else if (num == 2)
    //     {
    //         cout << "0 , 1";
    //     }
    //     else
    //     {
    //         int f = 0, l = 1, fib = 0;
    //         cout << f << " , " << l;
    //         for (int i = 0; i < num - 2; i++)
    //         {
    //             fib = f + l;
    //             cout << " , " << fib;
    //             f = l;
    //             l = fib;
    //         }
    //     }
    // }
    return 0;
}