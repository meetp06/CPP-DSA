//
// Created by Meet Patel on 3/26/25.
//
#include <iostream>
#include<vector>
using namespace std;
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
        // cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[j][i] << " ";
        }
        // cout << endl;
    }

}

//  1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 input
