#include<iostream>

using namespace std;

void firstFunction() {
    cout << "Name ";
}

void secondFunction() {
    cout << "Meet ";
}

int main() {
    cout << "My ";
    firstFunction();
    cout << "is ";
    secondFunction();
}

// int main() // not require return 0;
// void fun() // not require return 0;
// int fun() // require return 0;
// int main only used one time
// always make all function above int main
// no any code run after return keyword