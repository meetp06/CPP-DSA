//
// Created by Meet Patel on 4/2/25.
//
#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {3, 2, 5, 3, 1, 8, 3, 7}, temp = 0;
    for (int i = 0; i < 8; i++)
    {
        numbers[i] = numbers[i] - 1;
    }
    for (int i = 0; i < 8; i++)
    {
        temp = numbers[i] % 8;
        numbers[temp] = numbers[temp] + 8;
    }
    for (int number : numbers)
    {
        cout << number/8 << " ";
    }
}
