//
// Created by Meet Patel on 2/23/25.
//

#include <iostream>
using namespace std;


int main()
{
    int a[] = {5, 10, 30, 20, 15}, k = 3, n = 5;

    int start = 0, end = 0, mid;

    for (int i = 0; i < n; i++)
    {
        start = fmax(start, a[i]);
        end += a[i];
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        int pages = 0, count = 1;
        for (int i = 0; i < n; i++)
        {
            pages += a[i];
            if (pages > mid)
            {
                count++;
                pages = a[i];
            }
        }
        if (count <= k)
        {
            // ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    cout << start;
}
