//
// Created by Meet Patel on 3/31/25.
//
#include <iostream>
using namespace std;

int main()
{
    int temp = 3,newJ=3;
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
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    // Swap
    for (int i = 0; i < 4/2; i++)
    {
        if (newJ == 3)
        {
            for (int j = newJ; j >=0 ; j--)
            {
                swap(matrix[i][j], matrix[temp][j]);
            }
            temp--;
            newJ = 0;
        }
        else
        {
            for (int j = newJ; j <= 4 ; j++)
            {
                swap(matrix[i][j], matrix[temp][j]);
            }
            temp--;
            newJ = 3;
        }


    }
    cout << endl;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j <4; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }

}
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
