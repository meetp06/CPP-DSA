//
// Created by Meet Patel on 3/4/25.
//

#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    // v.push_back(2);
    // v.push_back(7);
    // v.push_back(11);
    // v.push_back(15);
    // v.push_back(27);
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(18);
    v.push_back(25);

    // optimal (two pointer)
    int start = 0, end = v.size()-1;
    while (start < end)
    {
        if (v[start] + v[end] == 10)
        {
            cout << v[start] << " " << v[end] << " = 10";
            return 0;
        }
        if (v[start] + v[end] < 10)
        {
            start = start + 1;
        }
        if (v[start] + v[end] > 10)
        {
            end = end - 1;
        }
    }

    // bruteforce
    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = i + 1; j < v.size(); j++)
    //     {
    //         if (v[i] + v[j] == 22)
    //         {
    //             cout << v[i] + v[j] << " is sum and index is " << i << " " << j;
    //             cout << "\n And number is: " << v[i] << " : " << v[j];
    //             return 0;
    //         }
    //     }
    // }


}
