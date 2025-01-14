//
// Created by Meet Patel on 1/3/25.
//

#include <iostream>
using namespace std;

int main()
{
    int n[] = {9, 4, 2, 05, 6, 3, 3, 70, 8};
    for (int k = 0; k < sizeof(n) / sizeof(n[0]); k++)
    {
        for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++)
        {
            if (i == sizeof(n) / sizeof(n[0]) - 1) break;
            if (n[i] > n[i + 1])
            {
                swap(n[i], n[i + 1]);
            }
        }
    }
    for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++)
    {
        cout << n[i] << " ";
    }
}

//Method 2

#include <iostream>
using namespace std;

int main()
{
    int n[] = {9, 4, 2, 05, 600, 43, 3, 3, 70, 8};
    for (int k = 0; k < sizeof(n) / sizeof(n[0]); k++)
    {
        for (int i = sizeof(n) / sizeof(n[0]) - 1; i >= 0; i--)
        {
            if (n[i] < n[i - 1])
            {
                swap(n[i], n[i - 1]);
            }
        }
    }
    for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++)
    {
        cout << n[i] << " ";
    }
}
