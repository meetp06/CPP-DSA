//
// Created by Meet Patel on 4/2/25.
//
#include <iostream>
using namespace std;

int main()
{
    int a[] = {3, 3, 2, 3, 1, 3, 2, 2, 1, 3, 3};
    sort(begin(a), end(a));
    int temp = 1, s = a[0], extra = 0, beforS = 0;

    for (int i = 0; i < 11; i++)
    {
        if (a[i] == a[i + 1])
            temp++;
        if (a[i] != a[i + 1])
        {
            beforS = s;
            if (extra < temp)
                extra = temp;
            temp = 1;
            s++;
        }
    }
    cout << beforS << " is:" << extra;
}
