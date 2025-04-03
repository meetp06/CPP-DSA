//
// Created by Meet Patel on 3/19/25.
//
// #include <iostream>
// using namespace std;
//
// // TC(time complexity) n^2
// int main()
// {
//     vector<int> v;
//     v.push_back(9);
//     v.push_back(5);
//     v.push_back(8);
//     v.push_back(12);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(7);
//     v.push_back(4);
//
//     int store = 0, mainStore = 0;
//     for (int i = 0; i < v.size(); i++)
//     {
//         for (int j = i + 1; j < v.size(); j++)
//         {
//             store = v[j] - v[i];
//             if (store >= mainStore)
//             {
//                 mainStore = store;
//             }
//         }
//     }
//     cout << mainStore;
// }
//
// ------------------------------------------------------------------------------

#include <iostream>
using namespace std;

// TC(time complexity) n
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(5);
    v.push_back(8);
    v.push_back(12);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);

    int ans = v[v.size() - 1], c = 0, store_maxi = 0;
    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (ans < v[i])
        {
            ans = v[i];
        }
        c = ans - v[i];
        if (store_maxi < c)
        {
            store_maxi = c;
        }
    }
    cout << store_maxi;
}

