//
// Created by Meet Patel on 6/17/25.
//
#include <iostream>
using namespace std;

int main()
{
    string str = "Meet2 Patel1 jhgch4";
    vector<string> store(10);
    int count = 0;
    int start = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')
        {
            for (int j = start; j < i; j++)
            {
                store[count] += str[j];
            }
            count++;
            start = i + 1;
        }
        if (i == str.size() - 1)
        {
            for (int j = start; j < i + 1; j++)
            {
                store[count] += str[j];
            }
            count++;
            start = i + 1;
        }
    }
    if (count == 1)
    {
        cout << store[0].substr(0, store[0].size() - 1) << " ";
        return 0;
    }
    if (store.size() == 2)
    {
        if (store[0][store[0].size() - 1] > store[1][store[1].size() - 1])
        {
            swap(store[0], store[1]);
        }
    }
    for (int i = 0; i < store.size(); i++)
    {
        for (int j = 0; j < (store.size()) - i; j++)
        {
            if (store[j][store[j].size() - 1] > store[j + 1][store[j + 1].size() - 1])
            {
                swap(store[j], store[j + 1]);
            }
        }
    }
    string newStr;
    for (int i = 0; i < str.size(); i++)
    {
        if (store[i].size() > 1)
        {
            newStr =  newStr + store[i].substr(0, store[i].size() - 1);
        }
    }
    cout<<newStr;
}
