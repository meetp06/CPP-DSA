//
// Created by Meet Patel on 4/20/25.
//
#include <iostream>
using namespace std;

int main()
{
    string str = "abab";
    int store = 0;
    int newStore = 0;
    sort(str.begin(), str.end());
    if (str.size() == 2) return 2;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == str[i + 1])
        {
            store += 2;
            i++;
        }
        else
            newStore = 1;
    }
    cout << store + newStore;
}