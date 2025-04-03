//
// Created by Meet Patel on 3/23/25.
//

//Solution 1
#include <iostream>
using namespace std;

// time complxity is n
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(0);
    v.push_back(5);
    v.push_back(2);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    vector<int> lsbv(v.size(),0); //left_side_big_value
    vector<int> rsbv(v.size(),0); //right_side_big_value
    lsbv[0] = 0;

    for (int i = 1; i < v.size(); i++)
    {
        // logic:1
        lsbv[i] = max(lsbv[i - 1], v[i - 1]);

        // logic:2
        // if (lsbv[i - 1] < v[i - 1])
        // {
        //     lsbv[i] = v[i - 1];
        // }
        // else
        // {
        //     lsbv[i] = lsbv[i - 1];
        // }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << lsbv[i];
    }
    cout << "\n";
    rsbv[v.size() - 1] = 0;

    for (int i = v.size() - 2; i >= 0; i--)
    {
        // logic:1
        rsbv[i] = max(rsbv[i + 1], v[i + 1]);

        // logic:2
        // if (rsbv[i + 1] < v[i + 1])
        // {
        //     rsbv[i] = v[i + 1];
        // }
        // else
        // {
        //     rsbv[i] = rsbv[i + 1];
        // }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << rsbv[i];
    }
    cout << "\n";
    cout << "Main output";
    int minimumIs = 0, sumIs = 0;
    for (int i = 0; i < v.size(); i++)
    {
        minimumIs = min(lsbv[i], rsbv[i]);
        if (minimumIs > v[i])
        {
            sumIs = sumIs + (minimumIs - v[i]);
        }
    }
    cout << ": " << sumIs;
}

//Solution 2
#include <iostream>
using namespace std;

// time complxity is n
int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(2);
    v.push_back(0);
    v.push_back(5);
    v.push_back(2);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);

    vector<int> lsbv(v.size(), 0); //left_side_big_value
    vector<int> rsbv(v.size(), 0); //right_side_big_value
    lsbv[0] = 0;
    rsbv[v.size() - 1] = 0;
    int count = v.size();
    for (int i = 1; i < v.size(); i++)
    {
        lsbv[i] = max(lsbv[i - 1], v[i - 1]);
        rsbv[count - (i + 1)] = max(rsbv[count - i], v[count - i]);
    }
    int minimumIs = 0, sumIs = 0;
    for (int i = 0; i < v.size(); i++)
    {
        minimumIs = min(lsbv[i], rsbv[i]);
        if (minimumIs > v[i])
        {
            sumIs = sumIs + (minimumIs - v[i]);
        }
    }
    cout << sumIs;
}


