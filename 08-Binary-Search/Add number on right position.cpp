//
// Created by Meet Patel on 1/8/25.
//

// #2
// #include<iostream>
// using namespace std;
//
// int BinarySearch()
// {
//     int a[] = {1, 3, 4, 5, 7, 8, 9, 11}, n, mid, s = 0, e = (sizeof(a) / sizeof(a[0])) - 1; //3
//     cout << "Enter n: ";
//     cin >> n;
//     while (s <= e)
//     {
//         mid = (s + e) / 2;
//         if (a[(sizeof(a) / sizeof(a[0])) - 1] < n)
//         {
//             return sizeof(a) / sizeof(a[0]);
//         }
//         else if (s == e)
//         {
//             return e;
//         }
//         else if (a[mid] > n)
//         {
//             e = --e;
//         }
//         else
//         {
//             s = ++mid;
//         }
//     }
//     return -1;
// }
//
//
// int main()
// {
//     cout << BinarySearch();
// }


// #1
#include <iostream>
using namespace std;

int findPosition(int a[], int size, int n)
{
    int s = 0, e = size - 1, mid;

    while (s <= e)
    {
        mid = s + (e - s) / 2;

        if (a[mid] == n) // Element already exists
        {
            return mid;
        }
        else if (a[mid] > n) // Search in the left half
        {
            e = mid - 1;
        }
        else // Search in the right half
        {
            s = mid + 1;
        }
    }
    return s; // Return the position where the number should be inserted
}

int main()
{
    int a[] = {1, 3, 4, 5, 7, 8, 9, 11, 14, 15, 17, 19};
    int size = sizeof(a) / sizeof(a[0]);
    int n;

    cout << "Enter a number to find its position: ";
    cin >> n;

    int position = findPosition(a, size, n);

    cout << "The number " << n << " should be at position: " << position << endl;

    return 0;
}

// #3
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid; // Target found
            } else if (nums[mid] < target) {
                start = mid + 1; // Search in the right half
            } else {
                end = mid - 1; // Search in the left half
            }
        }

        return start; // Return the position to insert
    }
};