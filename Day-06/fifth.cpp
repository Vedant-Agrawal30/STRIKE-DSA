#include <iostream>
using namespace std;

// pass by value
void increment(int n)
{
    n++;
}

// pass by Refrence
void increment1(int &n)
{
    n++;
}

int main()
{
    int a = 10;
    int b =10;

    increment(a);
    cout << a << endl;
    increment1(b);
    cout << b << endl;
}