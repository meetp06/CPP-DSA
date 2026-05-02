//
// Created by Meet Patel on 4/8/25.
//
#include <iostream>
using namespace std;

int main()
{
    string str = "amazon", str2 ="ipapksn" ;

    // cout<<str.substr(str.size()-2)+str.substr(0,str.size()-2);
    string r = "ipapksn", l = "ksnipap", n, p, t, y;
    n[0] = str[str.size() - 2];
    n[1] = str[str.size() - 1];
    p[str.size() - 2] = str[0];
    p[str.size() - 1] = str[1];
    for (int i = 0; i < str.size() - 2; i++)
    {
        n[i + 2] = str[i];
    }
    for (int i = 0; i < str.size() - 2; i++)
    {
        p[i] = str[i + 2];
    }
    for (int i = 0; i < str.size(); i++)
    {
        t += n[i];
    }
    for (int i = 0; i < str.size(); i++)
    {
        y += p[i];
    }

    if (t == str2 or y == str2)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}


#include <iostream>
using namespace std;

int main()
{
    string str = "amazon", target = "azonam";

    if (target == (str.substr(str.size() - 2) + str.substr(0, str.size() - 2)))
    {
        cout<<"ok";
        return 0;
    }
    if (target == (str.substr(2) + str.substr(0, 2)))
    {
        cout<< "ok";
        return 0;
    }
    cout << "no";
}
