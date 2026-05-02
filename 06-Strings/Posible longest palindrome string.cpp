//
// Created by Meet Patel on 6/17/25.
//

#include <iostream>
using namespace std;

int main()
{
    string s = "abaccb";
    vector<int> store(26, 0);

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        store[ch - 'a']++;
    }

    int final_store = 0;
    for (int i = 0; i < 26; i++)
    {
        if (store[i] % 2 == 0)
        {
            final_store += store[i];
        }
        else
        {
            final_store += store[i] - 1;
        }
    }

    if (s.length() > final_store)
    {
        cout << final_store + 1;
    }
    else
    {
        cout << final_store;
    }
}
