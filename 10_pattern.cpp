#include <iostream>
using namespace std;
int main()
{
    // // Eg.1
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // // Eg.2
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int k = 0; k < i; k++)
    //     {
    //         cout << k << " ";
    //     }
    //     // for (int j = 0; j < i; j++)
    //     // {
    //     //     cout << i << " ";
    //     // }
    //     cout << endl;
    // }

    // // Eg.3
    // int n = 6;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = i; j < 5; j++)
    //     {
    //         cout << "   ";
    //     }
    //     for (int k = 0; k < i; k++)
    //     {
    //         cout << " * ";
    //     }
    //     for (int l = 1; l < i; l++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // // Eg.4
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // // Eg.5
    // int n = 4;
    // for (int row = 1; row < n; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << col << " ";
    //     }
    //     cout << endl;
    // }

    // // Eg.6
    // int n = 5;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // // Eg.7
    // int n = 5;
    // for (int row = 1; row < n; row++)
    // {
    //     for (int col = row; col > 0; col--)
    //     {
    //         cout << col;
    //     }
    //     cout << endl;
    // }

    // // Eg.8
    // int n = 5;
    // char alpha = 'a';
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << alpha << " ";
    //     }
    //     alpha = alpha + 1;
    //     cout << endl;
    // }

    // // Eg.9
    // int n = 5;
    // for (int row = n; row >= 1; row--)
    // {
    //     for (int col = row; col >= 1; col--)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // // Eg.10
    // int n = 5;
    // for (int row = 1; row <= 5; row++)
    // {
    //     for (int col = 1; col >= 5 * row - 1; col--)
    //     {
    //         cout << " * ";
    //     }
    //     cout << endl;
    // }

    // //Eg.11
    // int n = 5;
    // for (int i = 5; i >= 0; i--)
    // {
    //     for (int j = 1; j <= i + 1; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // // Eg.12
    // // Pyramid
    // int n = 5;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int space = 1; space <= n - row; space++)
    //     {
    //         cout << " ";
    //     }
    //     for (int star = 1; star <= (2 * row) - 1; star++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // Eg.13
    // int n = 5;
    // for (int row = 1; row <= n; row++)
    // {
    //     // Space
    //     for (int sp = 1; sp <= n - row; sp++)
    //     {
    //         cout << " ";
    //     }
    //     // Numbers
    //     for (int num = 1; num <= row; num++)
    //     {
    //         cout << num;
    //     }
    //     for (int rnum = row - 1; rnum > 0; rnum--)
    //     {
    //         cout << rnum;
    //     }
    //     cout << endl;
    // }

    // // Eg.14
    // // Reverse Pyramid
    // int n = 5, tmp = n;
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int sp = 0; sp < row; sp++)
    //     {
    //         cout << " ";
    //     }
    //     for (int str = (tmp * 2) - 1; str > 0; str--)
    //     {
    //         cout << "*";
    //     }
    //     tmp--;
    //     cout << endl;
    // }

    // // Eg.15
    // // Design Square
    // int n = 4;
    // for (int row = n; row > 0; row--)
    // {
    //     // Star
    //     for (int s = row; s > 0; s--)
    //     {
    //         cout << "*";
    //     }
    //     for (int s = row; s <= n - 1; s++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int s = row; s > 0; s--)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // for (int row = 2; row <= n; row++)
    // {
    //     // Star
    //     for (int s = 1; s <= row; s++)
    //     {
    //         cout << "*";
    //     }
    //     for (int s = row; s <= n - 1; s++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int s = 1; s <= row; s++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // Eg.16 Butterfly Pattern
    // int n = 4;
    // for (int row = 1; row <= n; row = row + 1)
    // {
    //     for (int col = 1; col <= row; col = col + 1)
    //     {
    //         cout << "*";
    //     }
    //     for (int sp = 1; sp <= (2 * n - 2 * row); sp = sp + 1)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 1; col <= row; col = col + 1)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for (int row = n - 1; row >= 1; row = row - 1)
    // {
    //     for (int col = 1; col <= row; col = col + 1)
    //     {
    //         cout << "*";
    //     }
    //     for (int sp = 1; sp <= (2 * n - 2 * row); sp = sp + 1)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 1; col <= row; col = col + 1)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // // Eg.17 Dimond
    int n = 10;
    for (int row = n; row > 0; row--)
    {
        // space
        for (int sp = row - 1; sp > 0; sp--)
        {
            cout << " ";
        }
        for (int str = 1; str <= n - row; str++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 2; row <= n; row++)
    {
        // space
        for (int sp = row - 1; sp > 0; sp--)
        {
            cout << " ";
        }
        for (int str = 1; str <= n - row; str++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}