//
// Created by Meet Patel on 1/7/25.
//

#include <iostream>
#include<vector>
using namespace std;

int BSF(int s, int e, int mid, int n, int left, vector<int>& a)
{
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (a[mid] == n)
        {
            left = mid;
            e = --mid;
        }
        else if (a[mid] < n)
        {
            s = ++mid;
        }
        else
        {
            e = --mid;
        }
    }

    return left;
}

int BSL(int s, int e, int mid, int n, int right, vector<int>& a)
{
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (a[mid] == n)
        {
            right = mid;
            s = ++mid;
        }
        else if (a[mid] < n)
        {
            s = ++mid;
        }
        else
        {
            e = --mid;
        }
    }

    return right;
}

int main()
{
    vector<int> a = {1, 2, 4, 4, 4, 4, 6, 7, 67};
    int s = 0, e = 8, mid, n, left = -1, right = -1;
    cout << "Enter n: ";
    cin >> n;
    cout << BSF(s, e, mid, n, left, a) << " " << BSL(s, e, mid, n, right, a);
}
