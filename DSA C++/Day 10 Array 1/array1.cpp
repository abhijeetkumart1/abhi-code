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

#include<iostream>
using namespace std;
int main(){
    // int arr[]={1,3,5,7,9};
    // cout<<arr[4]<<endl;
    // //printing all values
    // for(int i=0;i<5;i++){
    //     cout<<arr[i]<<" ";
    // }

    int arr[10];
    cout<<"Enter the input values in array "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    cout<<"printing the values of array"<<endl;
    for (int i = 0; i <10; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//Take  5 element in input and print their double
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[50];
//     int n;
//     cout<<"How many number you want to add in array "<<endl;
//     cin>>n;

//     cout<<"Enter the values of array ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Doubles : " ;
//     for(int i=0;i<n;i++){
//         cout<<2*arr[i]<<" ";
//     }
   
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[10];
//     for(int i=0;i<10;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//Pass By Reference (Changes in actual data , no copy is  formed )
// #include<iostream>
// using namespace std;
// void printArray(int arr[],int size){
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// void inc(int arr[],int size){
//     arr[0]=arr[0]+10;
//     printArray(arr,size);
// }
// int main(){
//     int arr[]={5,6};
//     int size=2;
//     inc(arr,size); //15 6
//     printArray(arr,size);//15 6
// }

//Linear Search in Array
// #include<iostream>
// using namespace std;
// bool find(int arr[],int size , int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[5]={1,3,5,7,9};
//     int size=5;
//     int key;
//     cout<<"Enter the key to find : ";
//     cin>>key;

//     if(find(arr,size,key)){
//         cout<<"Found"<<endl;
//     }
//     else{
//         cout<<"Not Found"<<endl;
//     }
// }

// //Linear Search without making function
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8};
//     int size=8;
//     int key=5;
//     bool flag=0;
//     //0-not found
//     //1-found

//     for(int i=0;i<size;i++){
//         if(arr[i]==key){
//             flag=1;
//             break;
//         }
//     }
//     if(flag){
//         cout<<"Found";

//     }
//     else{
//         cout<<"Not Found";
//     }
//     return 0;
// }

//Count 0 and 1 in Arrays
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,1,0,1,0,1,0,0,0,0,1};
//     int size=11;
//     int numZero=0;
//     int numOne=0;

//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             numZero++;
//         }
//         if(arr[i]==1){
//             numOne++;
//         }
//     }
//     cout<<"Number of Zero : "<<numZero<<endl;
//     cout<<"Number of One : "<<numOne;
//     return 0;
// }

//Count Number of 2
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,2,1,1,2,3,4};
//     int size=8;
//     int count=0;

//     for(int i=0;i<size;i++){
//         if(arr[i]==2){
//             count++;
//         }
//     }
//     cout<<"Number of 2 : "<<count;
// }

//Maximum and Minimum Number in an array
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int size=9;
//     int maxi=INT_MIN;
//     int mini=INT_MAX;

//     for(int i=0;i<size;i++){
//         if(arr[i]>maxi){
//             maxi=arr[i];
//         }
//         if(arr[i]<mini){
//             mini=arr[i];
//         }
//     }
//     cout<<"Maximum Number : "<<maxi << endl;
//     cout<<"Minimum Number : "<<mini << endl;
//     return 0;
// }

//Extreme point in an array
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80};
//     int size=8;
//     int start=0;
//     int end=size-1;

//     while(true){
//         if(start>end)
//             break;
//         if(start==end){
//             cout<<arr[start]<<" ";
//         }
//         else{
//             cout<<arr[start]<<" ";
//             cout<<arr[end]<<" ";
//         }
//         start++;
//         end--;
//     }
//     return 0;
// }

//Reverse an Array
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={10,20,30,40,50,60,70,80};
//     int size=8;
//     int start=0;
//     int end=size-1;

//     while(start<end-1){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" "; //Printing the reverse array
//     }
// }
