//
// Created by Meet Patel on 4/1/25.
//
#include <iostream>
using namespace std;

int main()
{
    vector<vector<int> > matrix(4, vector<int>(5));

    //Input 4 row, 5 colomn
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            cin >> matrix[i][j];
    cout << endl;

    // How input look like
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            cout << matrix[i][j] << " ";
    cout<<endl;
    int s = 0, e = 19, mid = 0, divide = 0, reminder = 0, predict = 18;
    while (s < e)
    {
        mid = s + (e - s) / 2;
        divide = mid / 5;
        reminder = mid % 5;
        if ((matrix[divide][reminder]) == predict)
        {
            return 1;
        }
        if ((matrix[divide][reminder]) > predict)
        {
            e--;
        }
        else
        {
            s++;
        }
    }
    return 0;
}

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
