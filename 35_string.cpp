#include <iostream>
#include <string>
using namespace std;
int main()
{
    //     // String is a combination of charactors
    //     // Declaration
    //     string s = "helloworld";
    //     cout << s;

    //     // \0 is like null return string from there

    //     // input string from user
    //     cout << "Enter String using cin:" << endl;
    //     string str1;
    //     cin >> str1;

    //     cout << str1;
    //     string str;
    //     // getline(input,string)  use to input a string include spaces and tabs
    //     cout << "Enter String using getline:" << endl;
    //     getline(cin, str);
    //     cout << str;
    //     cout << str.size();

    //     string name;
    //     cout << "Enter string : " << endl;
    //     // getline()
    //     getline(cin, name);
    //     cout << name;

    //     // size()
    //     cout << name.size();

    //     // Concat
    //     string s1 = "jayad ", s2 = "pathan";
    //     string s3 = s1.append(s2);
    //     // or
    //     // string s3 = s1 + s2;
    //     cout << s3;

    //     // Remove last charector in string
    //     s1.pop_back();

    //     // attach word at last of string
    //     s1 = s1 + "p";
    //     cout << s1;

    //     // Escape Carector : \ use this symboll before " "
    //     // print : jayad pathan "good" employee
    //     string x = "Jayad pathan \"good\" employee";
    //     cout << x;

    // Q reverse a String
    // string name = "Pathan";
    // int start = 0, end = name.size() - 1;
    // while (start < end)
    // {
    //     swap(name[start], name[end]);
    //     start++;
    //     end--;
    // }

    // cout << name;

    // Calculate size of string
    // null \0 charector present at end of string

    // string s = "ajay";
    // int size = 0;
    // while (s[size] != '\0')
    // {
    //     size++;
    // }
    // cout << size;

    // Check string is palindrom or not
    string s = "MOM";
    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        if (s[start] != s[end])
        {
            cout << "not a palindrom";
            break;
        }
        else
        {
            cout << "String is palindrom";
            break;
        }
    }

    return 0;
}