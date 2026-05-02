//
// Created by Meet Patel on 3/31/25.
//
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << endl;

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
    int store = n % 4;

    if (store == 0)
    {
        cout << " rotation number is 0" << endl;

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << matrix[i][j] << " ";
            }
        }
        cout << endl;
    }
    if (store == 1)
    {
        cout << "rotation number is 1" << endl;

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
        for (auto& i : matrix)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << i[j] << " ";
            }
        }
    }
    if (store == 2)
    {
        cout << "rotation number is 2" << endl;

        int temp = 3, newJ = 3;
        for (int i = 0; i < 4; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }

        // Swap
        for (int i = 0; i < 4 / 2; i++)
        {
            if (newJ == 3)
            {
                for (int j = newJ; j >= 0; j--)
                {
                    swap(matrix[i][j], matrix[temp][j]);
                }
                temp--;
                newJ = 0;
            }
            else
            {
                for (int j = newJ; j <= 4; j++)
                {
                    swap(matrix[i][j], matrix[temp][j]);
                }
                temp--;
                newJ = 3;
            }


        }
        cout << endl;
        for (auto& i : matrix)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << i[j] << " ";
            }
        }
    }
    if (store == 3)
    {
        cout << " rotation number is 3" << endl;
        for (int i = 0; i < 4; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }
}

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16
