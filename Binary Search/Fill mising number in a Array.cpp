#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 4, 5, 8, 9, 10, 13}, e = (sizeof(a) / sizeof(a[0]) - 1), s = 0, mid = 0, n, store;
    cout << "Enter n: ";
    cin >> n;
    while (s <= e)
    {
        mid = s + (e - s) / 2;
        if ((a[mid] - mid) - 1 >= n)
        {
            store = mid;
            e = mid - 1;
        }
        else
        {
            s = ++mid;
        }
    }
    store = mid + n;
    cout << store;
}
