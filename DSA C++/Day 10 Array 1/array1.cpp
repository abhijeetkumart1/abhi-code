// #include<iostream>
// using namespace std;
// int main(){
//     //array declare
//     int arr[7];
//     cout<<arr<<endl;
//     cout<<&arr<<endl;
//     cout<<"Array Declare Successfully"<<endl;
//     return 0;
// }  

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,3,5,7,9};
//     cout<<arr[4]<<endl;
//     //printing all values
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }

//     int arr[10];
//     cout<<"Enter the input values in array "<<endl;
//     for(int i=0;i<10;i++){
//         cin>>arr[i];
//     }
//     cout<<"printing the values of array"<<endl;
//     for (int i = 0; i <10; i++){
//         cout<<arr[i]<<" ";

//     }
    

//     return 0;
// }
//Take  5 element in input and print their double
#include<iostream>
using namespace std;
int main(){
    int arr[5];
    cout << "Enter 5 elements:" << endl;
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }

    cout << "Doubles of the elements:" << endl;
    for(int i=0; i<5; i++){
        cout << 2 * arr[i] << " ";
    }
    cout << endl;
}