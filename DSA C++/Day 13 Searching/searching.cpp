//BINARY SERACH IN AN ARRAY
// #include<iostream>
// using namespace std;
// int binarySearch(int arr[],int size,int target){
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     while(start<=end){
//         int element=arr[mid];
//         if(element==target)
//             return mid;
//         else if(element<target){//right search
//             start=mid+1;            
//         }
//         else{
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
//     }
//     return -1;//element not found
// }
// int main(){
//     int arr[]={2,4,6,8,10,12,16};
//     int size=7;
//     int target=2;
//     int indexOfTarget=binarySearch(arr,size,target);
//     if(indexOfTarget==-1){
//         cout<<"Target not Found"<<endl;
//     }
//     else{
//         cout<<"Target Found"<<endl;
//     }
//     return 0;
// }

//First Occurence of an element
// #include<iostream>
// #include<vector>
// using namespace std;
// int firstOcc(vector<int>arr,int target){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
//     while(s<=e){
//         if(arr[mid]==target){
//             ans=mid;
//             e=mid-1;
//         }
//         else if(target<arr[mid]){
//             e=mid-1;//left search
//         }
//         else if(target>arr[mid]){
//             s=mid+1;
//         }
//         mid=e+(s-e)/2;
//     }
//     return ans;
// }
// int main(){
//     vector<int> v{1,3,3,3,3,3,3,6,7};
//     int target=3;
//     int ans=firstOcc(v,target);
//     cout<<"ans is "<<ans<<endl;
//     return 0;
// }

//Last Occurence
// #include<iostream>
// #include<vector>
// using namespace std;
// int lastOcc(vector<int>arr,int target){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=s+(e-s)/2;
//     int ans=-1;
    
//     while(s<=e){
//         if(arr[mid]==target){
//             ans=mid;
//             s=mid+1;
//         }
//         else if(target<arr[mid]){
//             e=mid-1;
//         }
//         else if(target>arr[mid]){
//             s=mid+1;
//         }
//         mid=s+(e-s)/2;
//     }
//     return ans;
// }
// int main(){
//     vector<int>v{1,3,7,7,7,7,7,7,7,7,7,7,7,7,9};
//     int target=7;
//     int ans=lastOcc(v,target);
//     cout<<"Last occurence is at "<<ans<<" index"<<endl;
//     return 0;
// }

//TOTAL NUMBER OF OCCURENCE
//MISSING ELEMENT IN AN ARRAY
//PEAK ELEMENT IN AN ARRAY
// #include<iostream>
// #include<vector>
// using namespace std;
// int findPeakIndex(vector<int>arr){
//     int s=0;
//     int e=arr.size()-1;
//     int mid=e+(s-e)/2;
//     while(s<e){
//         if(arr[mid]<arr[mid+1]){
//             s=mid+1;
//         }
//         else if(arr[mid]>arr[mid+1]){
//             e=mid;
//         }
//         mid=s+(e-s)/2;
//     }
//     return s;
// }
// int peakIndexInMountainArray(vector<int>arr){
//     return findPeakIndex(arr);
// }