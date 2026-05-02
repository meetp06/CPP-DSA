//
// Created by Meet Patel on 4/6/25.
//
#include <iostream>
using namespace std;

int main()
{
    string str = "memkem";
    // for (int i=s.size()-1;i >= 0;i--)
    // {
    //     cout<<s[i];
    // }

    int s = 0, e = str.size() - 1;
    while (s < e)
    {
        if (str[s] != str[e])
        {
            cout<<"not palindrom";
            return 0;
        }
        s++, e--;
    }
    cout<<"yes pelindrom";

    // int i = 0;
    // for (i = 0; str[i] != '\0'; i++)
    // {
    // }
    // cout << i;

}
