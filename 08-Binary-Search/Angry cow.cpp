//
// Created by Meet Patel on 2/24/25.
//

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 5, 7, 10}, size = sizeof(a) / sizeof(a[0]), start = a[0], end = a[size - 1] - a[0], k = 3,
        store, mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        int index = 1;
        for (int i = 0; i < size; i++)
        {
            store = a[i] + mid;
            if (store <= a[i + 1])
            {
                index++;
            }
        }
        if (index < k)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << mid;
}

