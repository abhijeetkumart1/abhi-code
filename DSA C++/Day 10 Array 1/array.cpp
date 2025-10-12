// #include<iostream>
// using namespace std;
// int main(){
//     // int arr[]={1,3,5,7,9};
//     // cout<<arr[4]<<endl;
//     // //printing all values
//     // for(int i=0;i<5;i++){
//     //     cout<<arr[i]<<" ";
//     // }

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

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[500];
//     int n;
//     cout<<"How many number you want to insert in the array "<<endl;
//     cin>>n;
//     cout<<"Enter the number "<<endl; //taking input
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     cout<<"Doubles : ";
//     for(int i=0;i<n;i++){
//         cout<<2*arr[i]<<" ";
//     }
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,3,5,7,9};
    
//     for(int i=0;i<5;i++){
//         arr[i]=1;
//     }
//     cout<<"New Array : ";
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }

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
//     inc(arr,size);
//     printArray(arr,size);
// }

//Linear Search In An Array
// #include<iostream>
// using namespace std;
// bool  find(int arr[],int size,int key){
//     for(int i=0;i<size;i++){
//         if(arr[i]==key)
//         return true;
//     }
//     return false;
// }
// int main(){
//     int arr[5]={1,3,5,7,8};
//     int size=5;
//     cout<<"Enter the key to find "<<endl;
//     int key;
//     cin>>key;
//     if(find(arr,size,key)){
//         cout<<"Found"<<endl;
//     }
//     else{
//         cout<<"Not Found"<<endl;
//     }
// }

//Linear Search without function
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

//Count 0's and 1's in Array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,0,0,0,0,0,1,1,1,1,1};
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
//     cout<<"Number of zeroes "<<numZero<<endl;
//     cout<<"Number of ones "<<numOne<<endl;

// }

//Maximum number in an array
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int arr[]={2,4,6,1,3,7,9,12,56,43,21};
//     int size=11;
//     //initailise the maxi variable with the minimum possible interger value
//     int maxi=INT_MIN;
//     for(int i=0;i<size;i++){
//         if (arr[i]>maxi)
//         {
//             maxi=arr[i];
//         }
        
//     }
//     cout<<"Maximum number is "<<maxi<<endl;
// }

//Minimum number in an array
// #include<iostream>
// #include<limits.h>
// using namespace std;
// int main(){
//     int arr[]={2,4,6,1,3,7,9,12,56,43,21};
//     int size=11;
//     //initailise the maxi variable with the minimum possible interger value
//     int mini=INT_MAX;
//     for(int i=0;i<size;i++){
//         if (arr[i]<mini)
//         {
//             mini=arr[i];
//         }
        
//     }
//     cout<<"Minimum number is "<<mini<<endl;
// }

//Extreme Print in an array
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int size=8;
    int start=0;
    int end=size-1;

    while(true){
        if(start>end)
        break;
        if(start==end){
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
}