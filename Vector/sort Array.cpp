//
// Created by Meet Patel on 3/4/25.
//

#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    vector<int> v;

    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);

    // Solution 1
    int start = 0, end = v.size() - 1;
    while (start < end)
    {
        if (v[start] == 1 && v[end] == 1)
        {
            end = end - 1;
        }
        if (v[start] == 0 && v[end] == 0)
        {
            start = start + 1;
        }
        if (v[start] == 0 && v[end] == 1)
        {
            start = start + 1;
            end = end - 1;
        }
        if (v[start] == 1 && v[end] == 0)
        {
            swap(v[start], v[end]);
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }


    // Solution 2

    // for (int i : v)
    // {
    //     if (i == 1)
    //     {
    //         count++;
    //     }
    //
    // }
    // cout << "Total 1 is: " << count << "\n";
    // cout << "Total 0 is: " << v.size() - count << "\n";
    //
    // int i = 0;
    // while (i < v.size() - count)
    // {
    //     cout << 0 << " ";
    //     i++;
    // }
    // int b = 0;
    // while (b < count)
    // {
    //     cout << 1 << " ";
    //     b++;
    // }

}
