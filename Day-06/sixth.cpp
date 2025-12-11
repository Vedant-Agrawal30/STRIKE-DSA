#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

void printing(int n = 5) {
    cout<<n;
}

int main()
{
    int a = 10, b = 20;
    int c;

    swap(a, b);
    cout << a << "   " << b << endl;

    // cout<<a << "    " <<b;

    // c = a;
    // a = b;
    // b = c;

    // cout<<a << "    " <<b;

    printing(10);
    cout<<endl;
    printing();
}