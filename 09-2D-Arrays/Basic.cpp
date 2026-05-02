//
// Created by Meet Patel on 3/25/25.
//
#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 3;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            // cout<<i<<j<<": "<<i+j<< "  ";
            if ((i) + j == 5)
            {
                cout<<"Yes";
                return 0;
            }
        }
        // cout<<"\n";
    }
    cout<<"No";
}
