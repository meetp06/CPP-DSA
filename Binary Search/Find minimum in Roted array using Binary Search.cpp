//
// Created by Meet Patel on 1/11/25.
//

#include <iostream>
using namespace std;

// #1
int main()
{
    int a[] = {14, 15, 16, 17, 18, 19, 20, 21, 6, 8, 10, 11, 12, 13}, store = 0;
    // a[] = {6, 7, 8, 1, 2, 3, 4, 5} :: 4, 6, 8, 10, 1, 2 :: 9, 10, 11, 6, 7, 8 :: 23,45,56,6,11,17,19
    int s = 0, e = (sizeof(a) / sizeof(a[0])) - 1, mid = 0;
    while (s <= e)
    {
        // mid = s + (e - s) / 2;
        //        OR
        mid = e + (s - e) / 2;
        if (a[mid] < a[mid + 1] && a[mid] < a[mid - 1])
        {
            store = a[mid];
            break;
        }
        else if (a[mid - 1] < a[mid] && a[mid] > a[mid + 1])
        {
            store = a[mid + 1];
            break;
        }
        else
        {
            e = --mid;
        }
    }
    cout << store;
}


// #2
int main()
{
    int a[] = {14, 15, 16, 17, 18, 19, 20, 21, 6, 8, 10, 11, 12, 13}, s = 0, e = (sizeof(a) / sizeof(a[0])) - 1, mid;
    while (s < e)
    {
        mid = s + (e - s) / 2;
        if (a[mid] > a[e])
        {
            s = ++mid;
        }
        else
        {
            e = mid;
        }
    }
    cout << a[s];
}
