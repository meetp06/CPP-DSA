//
// Created by Meet Patel on 1/13/25.
//

#include <iostream>
using namespace std;

int main()
{
    int n,counts=0;
    cout << "Enter n: ";
    cin >> n;

    bool found = false; // To track if a solution is found

    // Iterate over all possible values for a, b, c, and d
    for (int a = 0; a < 10; a++)
    {
        for (int b = 0; b < 10; b++)
        {
            for (int c = 0; c < 10; c++)
            {
                for (int d = 0; d < 10; d++)
                {
                    if (n == a + b + c + d)
                    {
                        counts++;
                        found = true;
                    }
                }
            }
        }
    }
    cout<<counts;
    if (!found)
    {
        cout << "No solution found for n = " << n << endl;
    }

    return 0;
}
