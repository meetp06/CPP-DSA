//
// Created by Meet Patel on 1/11/25.
//

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 3, 1}, store;
    int s = 1, e = (sizeof(a) / sizeof(a[0])) - 1, mid;
    while (s <= e)
    {
//        mid = s + (e - s) / 2;
//        OR
        mid = e + (s - e) / 2;
        if (a[mid] > a[mid - 1])
        {
            store = a[mid];
            s = ++mid;
        }
        else
        {
            e = --mid;
        }
    }
    cout << store;
}
