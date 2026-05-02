//
// Created by Meet Patel on 3/26/25.
//
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int temp = 0;
    vector<vector<int> > matrix(3, vector<int>(4));
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cin >> matrix[i][j];

    // How input Look like
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < 4; i++)
    {
        if (temp == 0)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << matrix[j][i] << " ";
            }
            cout << endl;
            temp = 3;
        }
        else
        {
            for (int k = 2; k >= 0; k--)
            {
                cout << matrix[k][i] << " ";
            }
            cout << endl;
            temp = 0;
        }
    }

}

//  1 2 3 4 5 6 7 8 9 10 11 12 input
