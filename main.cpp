#include <iostream>
using namespace std;

// Time Complexity is nlogn
int main()
{
    int a[] = {2,2,4};
    sort(begin(a), end(a));
    int temp = 1, s = a[0], extra = 0, beforS = 0, total = 11 / 2;

    for (int i = 0; i < 11; i++)
    {
        if (a[i] == a[i + 1])
            temp++;
        if (a[i] != a[i + 1])
        {
            beforS = s;
            if (extra < temp)
                extra = temp;
            temp = 1;
            s++;
        }
    }
    if (total < extra)
        cout << beforS << " is:" << extra;
    else
        cout << "No one win";
}

// I solve this question on leetcode with n time complexity