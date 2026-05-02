//
// Created by Meet Patel on 3/26/25.
//
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int> > matrix(4, vector<int>(3, 1));
    cout << matrix.size() << endl; //row size
    cout << matrix[0].size() << endl; //colom size
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
