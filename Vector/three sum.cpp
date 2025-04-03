//
// Created by Meet Patel on 3/24/25.
//
#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(45);
    v.push_back(6);
    v.push_back(10);
    v.push_back(8);
    sort(v.begin(), v.end());

    int sub = 0;
    for (int i = 0; i < v.size() - 2; i++)
    {
        int first_val = i;
        int s = i + 1;
        int e = v.size() - 1;
        while (s < e)
        {
            int targetNumber = 11;
            if (v[s] + v[e] + v[first_val] == targetNumber)
            {
                cout << v[s] << " " << v[e] << " " << v[first_val];
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

    //some of output is work
    // while (ins < ine)
    // {
    //     while (s < e)
    //     {
    //         mid = s + ((e - s) / 2);
    //         target1 = targetNumber - (v[ins] + v[ine]);
    //         if (v[ins] + v[mid] + v[ine] == targetNumber)
    //         {
    //             cout << v[ins] << " " << v[mid] << " " << v[ine];
    //             return 0;
    //         }
    //         if (target1 > mid)
    //         {
    //             s++;
    //         }
    //         if (target1 < mid)
    //         {
    //             e--;
    //         }
    //     }
    //     ins++;
    //     ine++;
    //     s = ine + 1;
    //     e = v.size() - 1;
    // }

    //Bruteforce approach
    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = i + 1; j < v.size(); j++)
    //     {
    //         for (int k = j + 1; k < v.size(); k++)
    //         {
    //             if (v[i] + v[j] + v[k] == 54)
    //             {
    //                 cout << v[i] <<" "<< v[j] <<" "<< v[k] << " ";
    //             }
    //         }
    //     }
    // }

}

