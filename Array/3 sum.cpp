//
// Created by Meet Patel on 4/20/25.
//
// 3 sum is zero
#include <iostream>
using namespace std;

int main()
{
    vector<int> num;
    num.push_back(-1);
    num.push_back(0);
    num.push_back(1);
    num.push_back(2);
    num.push_back(-1);
    num.push_back(-4);
    sort(num.begin(), num.end());
    for (int i = 0; i < num.size(); i++)
    {
        for (int j = i + 1; j < num.size(); j++)
        {
            for (int k = j + 1; k < num.size(); k++)
            {
                if (num[i] + num[j] + num[k] == 0)
                {
                    cout << num[i] << " " << num[j] << " " << num[k] << endl;
                }
            }
        }
    }
}


