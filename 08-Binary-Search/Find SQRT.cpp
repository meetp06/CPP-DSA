//
// Created by Meet Patel on 1/10/25.
//

#include <iostream>
using namespace std;

int Sqrt()
{
    int n, mid = 0, s = 1, e;
    cout << "Enter n: ";
    cin >> n;
    e = n;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if ((mid * mid) == n)
        {
            return mid;
        }
        else if ((mid * mid) < n)
        {
            s = ++mid;
        }
        else
        {
            e = --mid;
        }
    }
    return mid;
}

int main()
{
    cout << Sqrt();
    return 0;
}
