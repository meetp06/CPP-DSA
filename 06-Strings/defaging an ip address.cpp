//
// Created by Meet Patel on 4/8/25.
//
#include <iostream>
using namespace std;

int main()
{
    string str = "1.1.1.1", ans;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '.')
        {
            ans += "[.]";
        }
        else
        {
            ans += str[i];
        }
    }
    cout<<ans;
}
