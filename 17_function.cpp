#include <iostream>
using namespace std;

// // Function Declaration
// // returntype function_name parameters then body
// bool isPrime(int num)
// {
//     if (num < 2)
//         return 0;
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//             return 0;
//         else
//             return 1;
//     }
// }

// // Function of Factorial
// int factorial(int num)
// {
//     if (num >= 0 && num < 2)
//         return 1;
//     int fact = 1;
//     for (int i = 1; i < num + 1; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }

// // Find Sum of Two numbers
int sum(int a, int b)
{
    int sum = 0;
    sum = a + b;
    return sum;
}

// // No return any thing only print
// // use void
void printHello()
{
    cout << "Hello";
}

int main()
{
    // // Function call
    // cout << isPrime(7);
    // cout << factorial(5);
    // cout << sum(5, 10);
    printHello();
    return 0;
}