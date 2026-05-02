//
// Created by Meet Patel on 1/3/25.
//

#include <iostream>
using namespace std;

int main()
{
    int n[] = {9, 4, 20, 05, 6, 3, 3, 70, 8};
    for (int i = 1; i < sizeof(n) / sizeof(n[0]); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (n[j] > n[i])
            {
                swap(n[j], n[i]);
            }
        }
    }
    for (int i = 0; i < sizeof(n) / sizeof(n[0]); i++)
    {
        cout << n[i]<<" ";
    }
}
