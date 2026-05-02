//
// Created by Meet Patel on 3/25/25.
//
#include <iostream>
using namespace std;

int sum2dMatrix(int a[3][3], int b[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 90}, b[3][3] = {11, 12, 13, 14, 15, 16, 17, 18, 19};
    sum2dMatrix(a, b);
}
