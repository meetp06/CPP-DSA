//
// Created by Meet Patel on 1/11/25.
//

#include <iostream>
using namespace std;

int SearchNumber()
{
    int a[] = {14, 15, 16, 17, 18, 19, 20, 21, 6, 8, 10, 11, 12, 13};
    int s = 0, e = (sizeof(a) / sizeof(a[0])) - 1, mid = 0, n;
    cout << "Enter Num: ";
    cin >> n;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if (a[mid] == n) return mid;
        if (a[mid] >= a[s])
        {
            if (a[s] <= n && n <= a[mid])
            {
                e = --mid;
            }
            else
            {
                s = ++mid;
            }
        }
        else
        {
            if (a[mid] <= n && n <= a[e])
            {
                s = ++mid;
            }
            else
            {
                e = --mid;
            }
        }
    }
    return -1;
}

// #2
int main()
{
    cout << SearchNumber();
}
