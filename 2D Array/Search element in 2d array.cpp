//
// Created by Meet Patel on 3/25/25.
//

// #include <iostream>
// using namespace std;
//
// int main()
// {
//     int sum;
//     cout << "Enter sum: ";
//     cin >> sum;
//     int a[4][4] = {12, 43, 6, 54, 67, 433, 76, 54, 345, 65, 4, 3, 34, 56, 545, 6};
//     for (int i = 0; i <= 4; i++)
//     {
//         for (int j = 0; j <= 4; j++)
//         {
//             if (a[i][j] == sum)
//             {
//                 cout << "Yes" << " \n";
//                 cout << i << j << " \n";
//                 cout << "Index is: " << i * 4 + j;
//                 return 0;
//             }
//         }
//     }
//     cout << "No";
// }

// Use function for this program

#include <iostream>
using namespace std;

int findElement(int a[][4], int sum)
{
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            if (a[i][j] == sum)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int sum;
    cout << "Enter sum: ";
    cin >> sum;
    int a[4][4] = {12, 43, 6, 54, 67, 433, 76, 54, 345, 65, 4, 3, 34, 56, 545, 6};
    cout << findElement(a, sum);
}
