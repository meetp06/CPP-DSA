//
// Created by Meet Patel on 3/5/25.
//

#include <iostream>
using namespace std;

int main()
{

    vector<int> v;
    vector<int> newv;
    vector<int> postfix;
    v.push_back(6);
    v.push_back(4);
    v.push_back(5);
    v.push_back(-3);
    v.push_back(2);
    v.push_back(8);

    // prefix
    newv.push_back(v[0]);

    for (int i = 1; i < v.size(); i++)
    {
        newv[i] = newv[i - 1] + v[i];
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << newv[i] << " ";
    }

    // suffix
    reverse(v.begin(), v.end());
    postfix.push_back(v[0]);

    for (int i = 1; i < v.size(); i++)
    {
        postfix[i] = postfix[i - 1] + v[i];
    }

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << postfix[i] << " ";
    }
}
