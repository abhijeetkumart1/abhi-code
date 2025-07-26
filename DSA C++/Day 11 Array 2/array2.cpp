// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n = 0;
//     cin>>n;
//     vector<int> arr(n);

//     arr.push_back(10);
//     arr.push_back(0);

//     arr.pop_back();

//     arr.size();
//     arr.empty();
//     cout<<arr[0];

//     vector<int> arr;

//     cout<<arr.size()<<endl;
//     cout<<arr.capacity()<<endl;
   
//     arr.push_back(5); //Insert
//     arr.push_back(6);

//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     arr.pop_back();
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>brr(10);
//     cout<<"Size of b "<<brr.size()<<endl;
//     cout<<"Capacity of b "<<brr.capacity()<<endl;
//     for(int i=0;i<brr.size();i++){
//         cout<<brr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     cout<<"Printing crr"<<endl;
//     vector<int>crr{10,20,30,50};
//     for(int i=0;i<crr.size();i++){
//         cout<<crr[i]<<" "<< endl;
//     }
//     cout<<endl;
//     cout<<"Vector crr is empty or not "<<crr.empty()<<endl;
//     return 0;
// }

//1.Find Unique element in an array
// #include <iostream>
// #include <vector>
// using namespace std;
// int findUnique(vector<int>arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter the size of array "<<endl;
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"Enter the elements "<<endl;
//     for(int i=0;i<arr.size();i++){
//         cin>>arr[i];
//     }
//     int uniqueElement=findUnique(arr);
//     cout<<"Unique Elements "<<uniqueElement<<endl;
//     return 0;
// }

//union of 2 arrays (assume no duplicate)
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int arr[]={1,3,5,7,9};
//     int sizea=5;
//     int brr[]={2,4,6,8};
//     int sizeb=4;

//     vector<int>ans;

//     for(int i=0;i<sizea;i++){
//         ans.push_back(arr[i]);
//     }
//     for(int i=0;i<sizeb;i++){
//         ans.push_back(brr[i]);
//     }

//     cout<<"Printing ans array "<<endl;
//     for(int i=0;i<ans.size();i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//Interesection of two arrays(common element)
#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int>ans;
    return 0;
}