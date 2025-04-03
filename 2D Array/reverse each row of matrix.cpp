//
// Created by Meet Patel on 3/25/25.
//
#include <iostream>
using namespace std;

int reverseElement(int a[][4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 3; j >= 0; j--)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    reverseElement(a);
}
