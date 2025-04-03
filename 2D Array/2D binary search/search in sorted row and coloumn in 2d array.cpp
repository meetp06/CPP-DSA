//
// Created by Meet Patel on 4/2/25.
//
#include <iostream>
using namespace std;

int main()
{
    vector<vector<int> > matrix(5, vector<int>(5));

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> matrix[i][j];
    cout << endl;

    // How input look like
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cout << matrix[i][j] << " ";
    cout << endl;
    int s = 0, e = 4, target = 500, count = 0;
    while (25 > count)
    {
        if (matrix[s][e] == target)
        {
            cout << s << " and " << e << " " << matrix[s][e]<<endl<<" "<<count;
            return 0;
        }
        if (matrix[s][e] > target)
        {
            e--;
            count++;
        }
        else
        {
            s++;
            count++;
        }
    }
    cout<<"Nothing";
    return 0;
}

// 4 8 15 25 60 18 22 26 42 80 36 40 45 68 104 48 50 72 83 130 70 99 114 128 170
