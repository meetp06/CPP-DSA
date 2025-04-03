//
// Created by Meet Patel on 3/25/25.
//
#include <iostream>
using namespace std;

int sum2dMatrix(int a[3][3], int sum, int store, int save_index)
{
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
        if (store <= sum)
        {
            store = sum;
            save_index = i;
        }
    }
    cout << save_index;
}

int main()
{
    int a[3][3] = {1, 200, 3, 4, 5, 6, 7, 8, 9}, sum = 0, store = 0, save_index = 0;
    sum2dMatrix(a, sum, store, save_index);
}
