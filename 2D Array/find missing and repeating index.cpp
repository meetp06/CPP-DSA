//
// Created by Meet Patel on 4/2/25.
//
#include <iostream>
using namespace std;

int main()
{
    int indexes[7] = {4, 3, 2, 1, 2, 7, 6};
    int newIndex[7] = {0};
    int count = 1;

    for (int indexe : indexes)
    {
        newIndex[indexe - 1] = count + newIndex[indexe - 1];
    }
    for (int i = 0; i < 7; i++)
    {
        if (newIndex[i] == 2)
        {
            cout <<i+1<<endl;
        }
        if (newIndex[i] == 0)
        {
            cout<<i+1;
        }
    }
}
