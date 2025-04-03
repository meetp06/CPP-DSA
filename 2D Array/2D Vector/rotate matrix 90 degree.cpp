//
// Created by Meet Patel on 3/31/25.
//
#include <iostream>
using namespace std;

// method 1
// int main()
// {
//     vector<vector<int> > matrix(4, vector<int>(4));
//     for (int i = 0; i < 4; i++)
//         for (int j = 0; j < 4; j++)
//             cin >> matrix[i][j];
//
//     // How input Look like
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//     }
//     cout << endl;
//     // 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
//
//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = matrix.size() - 1; j >= 0; j--)
//         {
//             cout << matrix[j][i] << " ";
//         }
//     }
// }

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
    }
    cout << endl;

    // Inverse
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    cout << endl;
    for (int i = 0; i < 4; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
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
