 #include <iostream>
 using namespace std;
 //ASC
 int main()
 {
     int a[14] = {3, 4, 5, 3, 8, 5, 4, 6, 2, 9, 1, 4345, 465, 6};
     for (int i = 0; i < (sizeof(a) / sizeof(a[0])) - 1; i++)
     {
         int index = i;
         for (int j = i + 1; j < sizeof(a) / sizeof(a[0]); j++)
         {
             if (a[j] < a[index])
             {
                 index = j;
             }
         }
         swap(a[i], a[index]);
     }
     for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
     {
         cout << a[i]<<" ";
     }
 }

 #include <iostream>
 using namespace std;
 //DESC
 int main()
 {
     int a[14] = {3, 4, 5, 3, 8, 5, 4, 6, 2, 9, 1, 4345, 465, 6};
     for (int i = 0; i < (sizeof(a) / sizeof(a[0])) - 1; i++)
     {
         int index = i;
         for (int j = i + 1; j < sizeof(a) / sizeof(a[0]); j++)
         {
             if (a[j] > a[index])
             {
                 index = j;
             }
         }
         swap(a[i], a[index]);
     }
     for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
     {
         cout << a[i]<<" ";
     }
 }

#include <iostream>
using namespace std;
//char
int main()
{
    char a[5] = {'e','m','t','e','z'};


    for (int i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
    {
        int index = i;
        for (int j = i + 1; j < sizeof(a) / sizeof(a[0]); j++)
        {
            if (a[j] < a[index])
            {
                index = j;
            }
        }
        swap(a[i], a[index]);
    }
    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        cout << a[i]<<" ";
    }
}