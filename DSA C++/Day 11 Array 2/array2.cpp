// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
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

#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter the value of n "<<endl;
    int n;
    cin >> n;
    vector<int>brr(n,-101);
    cout<<"Size of b "<<brr.size()<<endl;
    cout<<"Capacity of b "<<brr.capacity()<<endl;

    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
    return 0;
}