//
// Created by Meet Patel on 3/4/25.
//

#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(7);
    v.push_back(8);
    v.push_back(11);
    v.push_back(25);

    int start = 0, end = v.size() - 1, target = 56;
    while (start < end)
    {
        if (v[start] * v[end] == target)
        {
            cout << v[start] << " * " << v[end] << " = " << target;
            return 0;
        }
        if (v[start] * v[end] > target)
        {
            end = end - 1;
        }
        else
        {
            start = start + 1;
        }
    }
}
