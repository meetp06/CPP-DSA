//
// Created by Meet Patel on 4/13/25.
//
#include <iostream>
using namespace std;

 int main()
 {
     string str = "edcab";
     for (int i = 0; i < str.size(); i++)
     {
         for (int j = 0; j < str.size() - i; j++)
         {
             if (str[j - 1] > str[j])
             {
                 swap(str[j - 1], str[j]);
             }
         }
     }

     for (int i = 0; i < str.size(); i++)
     {
         cout << str[i] << " ";
     }
 }

