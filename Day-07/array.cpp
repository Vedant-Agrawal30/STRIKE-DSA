#include <iostream>
using namespace std;

int main()
{

    // int sum = 0;

    // int arr[5] = {70, 80, 40, 50, 90};
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << endl;
    // }

    // int marks[5] = {70,80,40,30,20};

    // int sum = 0;
    // for(int i=0; i<5; i++) {
    //     sum+=marks[i];
    // }

    // cout<<"The sum is : "<<sum<<endl;
    // cout<<"The Avg is : "<<sum/5<<endl;

    // for(int i=0; i<5; i++) {
    //     cout<<"The Address of location is : "<<&marks[i]<<endl;
    // }

    // Heightest marks class mein kiske hai?
    // int heighest = marks[0];
    // int index = marks[0];
    
    
    // for(int i=1; i<5; i++) {
    //     if(marks[i]>heighest) {
    //         heighest = marks[i];
    //         index = i;
    //     }
    // }
    // cout<<heighest<<" The index is: "<<index<<endl;

    // Search karna h 
    
    // for(int i=0; i<5; i++) {
        //     if(target == marks[i]) {
            //         cout<<"Yes"<<endl;
            //         return 0;
            //     }
            
            // }
            int marks[5] = {70,80,40,30,20};
    //         int minimum = marks[0];
    //         int index = marks[0];

    // for(int i=0; i<5;i++) {
    //     if(minimum > marks[i]) {
    //         minimum = marks[i];
    //         index = i;
    //     }
    // }
    
    // cout<<minimum<<" "<<index;

    for(int i=4; i>=0; i--){
        cout<<marks[i]<<endl;
    }
}