#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Check the longest palindrom sequence count
// int checkLongestPalindrom(string s)
// {
//     // get Count of each char in string
//     vector<int> lower(26, 0), upper(26, 0);
//     int count = 0;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (lower[s[i] - 'a'] >= 'a')
//         {
//             lower[s[i] - 'a']++;
//         }
//         else
//         {
//             upper[s[i] - 'A']++;
//         }
//     }

//     // get sum of all count
//     // if char count = even  then add drirectly in count
//     // if char count = odd then add char -1 in count
//     int odd = 0;
//     for (int i = 0; i < 26; i++)
//     {
//         if (lower[i] % 2 == 0)
//         {
//             count += lower[i];
//         }
//         else
//         {
//             count += lower[i] - 1;
//             odd = 1;
//         }

//         if (upper[i] % 2 == 0)
//             count += upper[i];
//         else
//         {
//             count += upper[i] - 1;
//             odd = 1;
//         }
//     }
//     return count + odd;
// }

// List the corecto sequence of words in sentence
// string correctSequence(string s)
// {
//     vector<string> ans(10);
//     int index = 0, count = 0, pos = 0;
//     string temp;
//     while (index < s.size())
//     {
//         if (s[index] == ' ')
//         {
//             temp.pop_back();
//             pos = s[index - 1] - '0';
//             // cout << pos;
//             ans[pos] = temp;
//             temp.clear();
//             index++;
//             count++;
//             cout << endl;
//         }
//         else
//         {
//             temp += s[index];
//             index++;
//         }
//     }
//     temp.pop_back();
//     pos = s[index - 1] - '0';
//     ans[pos] = temp;
//     temp.clear();
//     index++;
//     count++;

//     for (int i = 1; i <= count; i++)
//     {
//         temp += ans[i] + " ";
//     }
//     temp.pop_back();
//     cout << temp.size();
//     return temp;
// }

// string defangingString(string s)
// {
//     string temp;
//     for (int i = 0; i < s.size(); i++)
//     {
//         if (s[i] == '.')
//         {
//             temp += "[.]";
//         }
//         else
//         {
//             temp += s[i];
//         }
//     }
//     return temp;
// }

// bool rotateString(string s, string clockwise)
// {
//     int size = s.size() - 1;
//     char f = s[size];
//     string temp = "";
//     temp += f;
//     int start = 0;
//     while (start < s.size())
//     {
//         temp += s[start];
//         start++;
//     }
//     temp.pop_back();
//     cout << temp;
//     if (temp == clockwise)
//         return true;
//     else
//         return false;
// }

// Pangram String or not
// bool checkPangram(string s)
// {
//     vector<int> alpha(26, 0);
//     for (int i = 0; i < s.size(); i++)
//     {
//         alpha[s[i] - 'a'] = 1;
//     }

//     for (int i = 0; i < alpha.size(); i++)
//     {
//         if (alpha[i] == 0)
//             return 0;
//         else
//             return 1;
//     }
// }

// sort string
string sortString(string s)
{
    vector<int> alpha(26, 0);
    for (int i = 0; i < s.size(); i++)
    {
        alpha[s[i] - 'a']++;
    }
    string sorted = "";
    for (int i = 0; i < alpha.size(); i++)
    {
        char c = 'a' + i;
        while (alpha[i])
        {
            sorted += c;
            alpha[i]--;
        }
    }
    return sorted;
}
int main()
{
    // string s = "NITIN";
    // cout << checkLongestPalindrom(s);

    // string s = "HELLO1 WORLD2 GOOD4 MORNING3";
    // cout << correctSequence(s);

    // Defanging IP Address
    // string s = "1.22.33.4";
    // cout << defangingString(s);

    // string s = "amezon", clockwise = "namezo";
    // cout << rotateString(s, clockwise);

    // string s = "abcdefghijklmnopqrstuvwxyz";
    // cout << checkPangram(s);

    string s = "cbda";
    cout << sortString(s);
    return 0;
}