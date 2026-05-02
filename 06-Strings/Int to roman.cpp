//
// Created by Meet Patel on 6/21/25.
//

#include <iostream>
using namespace std;

int main()
{
    //     Input: num = 3749
    //
    // Output: "MMMDCCXLIX"
    int nums = 3749;
    string str = to_string(nums);

    int b = 0;
    int length = str.size();
    int n = length;
    int t = 0, p = 0;
    vector<basic_string<char>> ch;
    for (int i = 0; i < length; i++)
    {
        t = pow(10, n - 1);
        p = str[i] - '0';
        b = t * p;
        n = n - 1;

        if (b == 1)
            ch.push_back("I");
        if (b == 2)
            ch.push_back("II");
        if (b == 3)
            ch.push_back("III");
        if (b == 4)
            ch.push_back("IV");
        if (b == 5)
            ch.push_back("V");
        if (b == 6)
            ch.push_back("VI");
        if (b == 7)
            ch.push_back("VII");
        if (b == 8)
            ch.push_back("VIII");
        if (b == 9)
            ch.push_back("IX");

        if (b == 10)
            ch.push_back("X");
        if (b == 20)
            ch.push_back("XX");
        if (b == 30)
            ch.push_back("XXX");
        if (b == 40)
            ch.push_back("XL");
        if (b == 50)
            ch.push_back("L");
        if (b == 60)
            ch.push_back("LX");
        if (b == 70)
            ch.push_back("LXX");
        if (b == 80)
            ch.push_back("LXXX");
        if (b == 90)
            ch.push_back("XC");

        if (b == 100)
            ch.push_back("C");
        if (b == 200)
            ch.push_back("CC");
        if (b == 300)
            ch.push_back("CCC");
        if (b == 400)
            ch.push_back("CD");
        if (b == 500)
            ch.push_back("D");
        if (b == 600)
            ch.push_back("DC");
        if (b == 700)
            ch.push_back("DCC");
        if (b == 800)
            ch.push_back("DCCC");
        if (b == 900)
            ch.push_back("CM");

        if (b == 1000)
            ch.push_back("M");
        if (b == 2000)
            ch.push_back("MM");
        if (b == 3000)
            ch.push_back("MMM");
        if (b == 4000)
            ch.push_back("IV");
        if (b == 5000)
            ch.push_back("V");
        if (b == 6000)
            ch.push_back("VI");
        if (b == 7000)
            ch.push_back("VII");
        if (b == 8000)
            ch.push_back("VIII");
        if (b == 9000)
            ch.push_back("IX");
    }

    for (string i : ch)
    {
        cout << i;
    }
}
