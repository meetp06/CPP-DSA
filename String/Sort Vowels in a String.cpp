//
// Created by Meet Patel on 6/19/25.
//

#include <iostream>
using namespace std;

int main()
{
    string s = "lYmpH", temp;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' | s[i] == 'e' | s[i] == 'i' | s[i] == 'o' | s[i] == 'u' | s[i] == 'A' | s[i] == 'E' | s[i] ==
            'I' | s[i] == 'O' | s[i] == 'U')
        {
            temp += s[i];
        }
    }

    sort(temp.begin(), temp.end());

    int a = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' | s[i] == 'e' | s[i] == 'i' | s[i] == 'o' | s[i] == 'u' | s[i] == 'A' | s[i] == 'E' | s[i] ==
            'I' | s[i] == 'O' | s[i] == 'U')
        {
            swap(s[i], temp[a]);
            a++;
        }
    }
    cout << s;
}
