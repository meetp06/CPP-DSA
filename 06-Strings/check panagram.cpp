//
// Created by Meet Patel on 4/13/25.
//
#include <iostream>
using namespace std;

int main()
{
    string str = "QMDBUKTZSEOPLYARJNCHWGXVFI";
    sort(str.begin(), str.end());
    char a = 65;
    int c = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == a)
        {
            a++;
            c++;
        }
    }
    if (c == 26)
        cout << "Pangram";
    else
        cout << "Not Pangram";
}
