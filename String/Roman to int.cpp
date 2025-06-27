//
// Created by Meet Patel on 6/20/25.
//

#include <iostream>
using namespace std;

// I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000

int main()
{
    string s = "IV";
    vector<int> ch;
    int n = s.size() - 1, temp = 0, sum = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'I')
            ch.push_back(1);
        else if (s[i] == 'V')
            ch.push_back(5);
        else if (s[i] == 'X')
            ch.push_back(10);
        else if (s[i] == 'L')
            ch.push_back(50);
        else if (s[i] == 'C')
            ch.push_back(100);
        else if (s[i] == 'D')
            ch.push_back(500);
        else if (s[i] == 'M')
            ch.push_back(1000);
        else
        {
            ch.push_back(s[i] = 0);
        }
    }

    while (n >= 0)
    {
        if (ch[temp] < ch[temp + 1])
        {
            sum = sum - ch[temp];
            n--;
            temp++;
        }
        if (ch[temp] > ch[temp + 1])
        {
            sum = sum + ch[temp];
            n--;
            temp++;
        }
        if (ch[temp] == ch[temp + 1])
        {
            sum = sum + ch[temp];
            n--;
            temp++;
        }
    }
    cout << sum;
}
