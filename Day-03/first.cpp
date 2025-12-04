// #include<iostream>
// using namespace std;

// int main() {
//     // Even Number - 2,4,6,8,10,12,14,16,18,20
//     int num = 2;

//     for(int i = num; i<=20; i= i+2) {
//         cout<<i<<endl;
//     }

// }

// #include<iostream>
// using namespace std;

// int main() {
//     // odd number
//     int num = 2;
//     for(int i=1; i<=20; i=i+2) {
//         cout<<i<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;

// int main() {
//     // a to z

//     for(char alphabet = 'a'; alphabet<='z';alphabet++) {
//         cout<<alphabet<<endl;
//     }
//     // compiler converts a = 97
// }


// #include<iostream>
// using namespace std;

// int main() {
//     // sum of 1st ten number
//     int sum = 0;
//     for(int i=0;i<=5; i++) {
//         sum = sum + i;
//     }
//     cout<<"Sum of 1st ten number: "<<sum<<endl;
// }

// #include<iostream>
// using namespace std;

// int main() {
    
//     // sum of square of first 10 natural number
//     int sum = 0;
//     for(int i=1; i<=10; i++) {
//         sum = sum + i*i;
//     }
//     cout<<"Sum of square of first 10 natural number: "<<sum<<endl;
// }

// square number parttern
// #include<iostream>
// using namespace std;

// int main(){
    
//     for(int i=1; i<=5; i++) {
//         for(int j=1;j<=5;j++) {
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// pyramid number pattern
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=1; i<=5; i++) {
//         for(int j=1; j<=i;j++) {
//             cout<<i;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// char pattern

// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=1; i<=5; i++) {
//         for(char j='a'; j<='e';j++) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// Print Reverse Number - 10 9 8 7 6 5 4 3 2 1
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=10; i>=1; i--) {
//         cout<<i<<" c";
//     }
// }

// // Square Start Pattern
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=1; i<=5; i++) {
//         for(int j=1; j<=5; j++) {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// Pyramid Star Pattern
// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=1; i<=5; i++) {
//         for(int j=1; j<=i; j++) {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=5; i>=1; i--) {
//         for(int j=0; j<i; j++) {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
    
// }

// #include<iostream>
// using namespace std;

// int main(){
//     for(int i=4;i>=0;i--) {
//         for(int j=0;j<i;j++) {
//             cout<<" ";
//         }

//         for(int k=0; k<5-i; k++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


#include<iostream>
using namespace std;

int main() {
    int num = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
