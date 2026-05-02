#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    vector<int> temp;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left++]);
            // left++;
        }
        else
        {
            temp.push_back(arr[right++]);
            //   right++;
        }
    }

    while (left <= mid)
    {
        temp.push_back(arr[left++]);
        // left++;
    }

    while (right <= high)
    {
        temp.push_back(arr[right++]);
        // right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}

void sortarr(int arr[], int low, int high)
{
    if (low == high)
        return;
    int mid = (low + high) / 2;
    sortarr(arr, low, mid);
    sortarr(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {11, 2, 234, 3, 4, 5445, 56, 1, 565};
    int size = sizeof(arr) / sizeof(arr[0]);


    sortarr(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
