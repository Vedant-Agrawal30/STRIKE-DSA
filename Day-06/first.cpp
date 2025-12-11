#include <iostream>
using namespace std;

// function_type function_name(parameter)
void factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << fact << endl;
}

void sum(int a, int b) {
    cout<<"Sum of a + b is : "<<a+b<<endl;
}

int main()
{
    // Fact
    int num = 5, num2 = 7;
    int fact = 1;

    // for(int i=1; i<=num; i++) {
    //     fact = fact*i;
    // }

    // cout<<fact<<endl;

    // fact = 1;
    // for(int i=1; i<=num2; i++) {
    //     fact = fact*i;
    // }

    // function call(argument)
    factorial(num);
    factorial(num2);

    sum(2,4);
}