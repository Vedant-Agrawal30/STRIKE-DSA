#include <iostream>
using namespace std;

// int square(int n);
// int square(int n) {
//     return n*n;
// }

// function overloading 
int sum(int a, int b) {
    return a+b;
}

int sum(int a, int b,int c) {
    return a+b+c;
}

float sum(float a, float b) {
    return a+b;
}

int main() {

//     int num = 5;
//    cout<< square(num)<<endl;
float a =  3.2,b=5.2;

cout<<sum(3,4)<<endl;
cout<<sum(3,4,5)<<endl;
cout<<sum(a,b)<<endl;

}
