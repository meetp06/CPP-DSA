//
// Created by Meet Patel on 6/26/25.
//
#include <iostream>
using namespace std;

// Input: n = 10
// Output: 12
// Explanation: 12 = 10 * 9 / 8 + 7 - 6 * 5 / 4 + 3 - 2 * 1

int main()
{

    int num = 10, b = num, ans = num;
    string str = "1234";
    int t = 0;
    for (int i = 0; i < num; i++)
    {
        switch (str[t] - '0')
        {
        case 1:
            ans = ans * (b - 1);
            t++;
            b--;
            break;
        case 2:
            ans = ans / (b - 1);
            t++;
            b--;
            break;
        case 3:
            ans = ans + (b - 1);
            t++;
            b--;
            break;
        case 4:
            ans = ans - (b - 1);
            t++;
            b--;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
        if (t == 3)
        {
            t = 0;
        }
    }
    cout << ans;
}
