//
// Created by Meet Patel on 3/12/25.
//

// #include <iostream>
// using namespace std;
//
// // Time complexity is n^3
// int main()
// {
//     vector<int> v;
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(-2);
//     v.push_back(5);
//     v.push_back(8);
//     v.push_back(20);
//     v.push_back(-10);
//     v.push_back(8);
//     for (int k = 0; k < v.size(); k++)
//     {
//         for (int i = k; i < v.size(); i++)
//         {
//             for (int j = k; j <= i; j++)
//             {
//                 cout << v[j] << " ";
//             }
//             cout << ", \n";
//         }
//     }
// }

#include <iostream>
using namespace std;

// Time complexity is n kadance's algoritham
int main()
{
    vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(-5);
    v.push_back(8);
    v.push_back(-12);
    v.push_back(7);
    v.push_back(6);
    v.push_back(-2);


    int prefix = 0, maxi = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        prefix += v[i];
        maxi = max(prefix, maxi);
        if (prefix < 0)
        {
            prefix = 0;
        }
    }
    cout << maxi;
}
