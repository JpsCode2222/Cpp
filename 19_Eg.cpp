#include <iostream>
using namespace std;
// Function
char convertToUpper(char c)
{
    char ans = c - 'a' + 'A';
    return ans;
}
// bool checkArmstrong(int num)
// {
//     int cnt = 0, tmp = num, tmp2 = num, rem, tot = 0;
//     while (tmp)
//     {
//         tmp = tmp / 10;
//         cnt = cnt++;
//     }
//     while (tmp2)
//     {
//         rem = tmp2 % 10;
//         tmp2 /= 10;
//         tot = tot + pow(rem, cnt);
//     }
//     if (num == tot)
//         return true;
//     else
//         return false;
// }
int main()
{
    // char x;
    // cout << "Enter Charector :";
    // cin >> x;
    // cout << convertToUpper(x);

    // cout << "Enter Number :";
    // int num;
    // cin >> num;
    // cout << checkArmstrong(num);

    // int n = 4, p = 5, tot = 0;
    // for (int i = 1; i <= p; i++)
    // {
    //     tot += n * p;
    //     cout << tot << endl;
    // }

    // // Find Trailing of zeros   -> 5 = 5*4*3*2*1 = 120 -> last all zeros count -> 1;
    // int num = 11, fact = 1, rem, cnt = 0;
    // for (int i = 1; i <= num; i++)
    // {
    //     fact *= i;
    // }
    // while (fact)
    // {
    //     rem = fact % 10;
    //     fact = fact / 10;
    //     if (rem == 0)
    //     {
    //         cnt++;
    //     }
    //     else
    //         break;
    // }
    // cout << "Trailling of Zeros : " << cnt;

    // Count of Prime numbers
    int num = 10;
    for (int i = 2; i <= num; i++)
    {
        cout << i << endl;
    }
    return 0;
}