//
// Created by Meet Patel on 6/19/25.
//

#include <iostream>
using namespace std;

int main()

//Solution 1
// {
//     string s1 = "3689", s2 = "11";
//     cout << stoi(s1) + stoi(s2);
// }

//Solution 2
{
    check on leetcode : https://leetcode.com/u/mk14x_/

         int str1 = s1.size() - 1, str2 = s2.size() - 1;
    int carry = 0, temp = 0;
    vector<char> sum;
    while (str2 >= 0) {
        temp = s2[str2] - '0' + (str1 >= 0 ? s1[str1] - '0' : 0) + carry;
        carry = temp / 10;
        sum.push_back((temp % 10) + '0');
        str2--;
        str1--;
    }
    while (str1 >= 0) {
        temp = s1[str1] - '0' + carry;
        carry = temp / 10;
        sum.push_back((temp % 10) + '0');
        str1--;
    }

    if(carry){
        sum.push_back((carry) + '0');
    }
    reverse(sum.begin(), sum.end());
    return string(sum.begin(),sum.end());

}
