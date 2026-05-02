//
// Created by Meet Patel on 3/11/25.
//

#include <iostream>
using namespace std;

int main()
{
    int rians = 0, leans = 0, count = 0;
    vector<int> v;

    v.push_back(3);
    v.push_back(4);
    v.push_back(-2);
    v.push_back(5);
    v.push_back(8);
    v.push_back(20);
    v.push_back(-10);
    v.push_back(8);

    for (int i = 0; i < v.size(); i++)
    {
        int rians = 0;
        count += 1;
        leans += v[i];
        cout << v[i] << " ";
        for (int j = i + 1; j < v.size(); j++)
        {
            rians += v[j];
        }
        if (leans == rians)
        {
            break;
        }

    }
    cout << " new ";
    for (int m = count; m < v.size(); m++)
    {
        cout << v[m] << " ";
    }
}

//optimal approach

#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(-2);
    v.push_back(5);
    v.push_back(8);
    v.push_back(20);
    v.push_back(-10);
    v.push_back(8);

    int sum1 = v[0], sum2 = v[v.size() - 1];
    int s = 1, e = v.size() - 2;
    while (s <= e)
    {
        if (sum1 < sum2)
        {
            sum1 += v[s];
            s += 1;
        }
        if (sum1 > sum2)
        {
            sum2 += v[e];
            e -= 1;
        }
        if (sum1 == sum2)
        {
            cout << sum1 << " " << sum2;
            break;
        }
    }
}
