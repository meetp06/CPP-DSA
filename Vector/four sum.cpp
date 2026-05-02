//
// Created by Meet Patel on 3/24/25.
//
#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(5);
    v.push_back(1);
    v.push_back(0);
    v.push_back(6);
    v.push_back(0);
    v.push_back(30);
    v.push_back(10);
    sort(v.begin(), v.end());

    int sub = 0;
    for (int l = 0; l < v.size() - 3; l++)
    {
        for (int i = l + 1; i < v.size() - 2; i++)
        {
            int first_val = i;
            int s = i + 1;
            int e = v.size() - 1;
            while (s < e)
            {
                int targetNumber = 2;
                if (v[l] + v[s] + v[e] + v[first_val] == targetNumber)
                {
                    cout << v[first_val] << " " << v[l] << " " << v[s] << " " << v[e];
                    return 0;
                }
                sub = targetNumber - v[first_val];
                if (v[s] + v[e] > sub)
                {
                    e--;
                }
                if (v[s] + v[e] < sub)
                {
                    s++;
                }
            }
        }
    }
}
