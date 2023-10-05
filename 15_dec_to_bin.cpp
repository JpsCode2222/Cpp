#include <iostream>
using namespace std;
int main()
{
    // // Decimal To Binary Conversion
    // // rem -> num -> ans -> update mul * 10
    // int num = 13, rem, ans = 0, mul = 1;
    // while (num > 0)
    // {
    //     rem = num % 2;
    //     num = num / 2;
    //     ans = rem * mul + ans;
    //     mul = mul * 10;
    // }
    // cout << ans;

    // Binary To Decimal
    int num = 1101, rem, ans = 0, mul = 1;
    while (num > 0)
    {
        rem = num % 10;
        num /= 10;
        ans += rem * mul;
        mul *= 2;
    }
    cout << ans;
    return 0;
}