//
// Created by Meet Patel on 3/25/25.
//
#include <iostream>
using namespace std;

int diagonalSum(int a[4][4], int sum1, int sum2)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
            {
                sum1 += a[i][j];
            }
            if (i + j == 3)
            {
                sum2 += a[i][j];
            }
        }
    }
    cout << sum1 << " " << sum2;
}

int main()
{
    int a[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 20}, sum1 = 0, sum2 = 0;
    diagonalSum(a, sum1, sum2);
}
