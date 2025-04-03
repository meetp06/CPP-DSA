//
// Created by Meet Patel on 3/4/25.
//

#include <iostream>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(3);
    v.push_back(2);
    v.push_back(50);
    v.push_back(80);
    sort(v.begin(), v.end());

    // optimal (two pointer)

     int start = 0, end = 1, target=45;
     while (start < v.size())
     {
         if (v[end] - v[start] == target)
         {
             cout << v[end] << " - " << v[start] << " = 45";
             return 0;
         }
         if (v[end] - v[start] < target)
         {
             end =end+1;

         }
         if (v[end] - v[start] > target)
         {
             start = start + 1;
         }
     }

    // Better approach (binary search)
    for (int i = 0; i < v.size() - 2; i++)
    {
        int start = i + 1, end = v.size() - 1, mid = 0, target = 45;;
        while (start < end)
        {
            mid = start + (end - start) / 2;
            if (v[mid] - v[i] == target)
            {
                cout << v[mid] << " - " << v[i] << " = " << target;
                return 0;
            }
            if (v[mid] - v[i] < target)
            {
                start = start + 1;
            }
            else
            {
                end = end - 1;
            }
        }
    }
}
