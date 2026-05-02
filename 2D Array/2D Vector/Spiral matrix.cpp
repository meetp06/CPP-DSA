//
// Created by Meet Patel on 3/26/25.
//
#include <iostream>
#include<vector>
using namespace std;
// HARD problem
int main()
{
    vector<vector<int> > matrix(4, vector<int>(4));
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> matrix[i][j];

    // How input Look like
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int top = 0, right = 3, bottom = 3, left = 0;
    while (top <= right and left <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            cout << matrix[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << matrix[i][right] << " ";
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            cout << matrix[bottom][i] << " ";
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            cout << matrix[i][left] << " ";
        }
        left++;
    }
}

//  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 input
