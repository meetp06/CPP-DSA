//
// Created by Meet Patel on 1/4/25.
//

#include<iostream>
using namespace std;

int BinarySearch()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8}, n, mid=0, s = 0, e = 7;
    cout << "Enter n: ";
    cin >> n;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (a[mid] == n)
        {
            return mid;
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
    return -1;
}


// #Binary Search Basic
int main()
{
    cout << BinarySearch();
    return 0;
}


//Try2
// #include <iostream>
// using namespace std;
//
// int main()
// {
//     int a[] = {1, 2, 3, 4, 5, 6, 7, 9}, mid, n, s = 0, e = 7;
//     cout << "Enter n: ";
//     cin >> n;
//
//     for (int i = 0; i < 8; i++)
//     {
//         mid = (s + e) / 2;
//         if (a[mid] == n)
//         {
//             cout << "found" << " " << mid;
//             break;
//         }
//         else if (a[mid] < n)
//         {
//             s = mid++;
//         }
//         else
//         {
//             e = mid--;
//         }
//     }
//
// }

//Try 1
// #include <iostream>
// using namespace std;
//
// int main()
// {
//    int a[] = {1, 2, 3, 4, 5, 6, 7, 9}, mid, n, big=0, bigmid=0;
//    cout << "Enter n: ";
//    cin >> n; // 4
//    int size = (sizeof(a) / sizeof(a[0]) - 1);
//    mid = (0 + size) / 2;
//    for (int i = 0; i < size+1; i++)
//    {
//       mid = (i + size) / 2;
//       if (a[mid] == n)
//       {
//          cout << "Found"<<" "<<a[mid];
//          // break;
//          // return 0;
//       }
//       else if (a[mid] < n)
//       {
//          bigmid = (mid + size) / 2;
//          big = bigmid;
//          for (int j = mid; j < size; j++)
//          {
//             big = (big + size) / 2;
//             if (a[big] == n)
//
//             {
//                cout << "Found in big";
//                // return 0;
//             }
//          }
//       }
//       else
//       {
//          cout << "Hello";
//       }
//    }
// }
//
