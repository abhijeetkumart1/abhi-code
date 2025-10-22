// //Row Wise sum print
// #include<iostream>
// using namespace std;
// void printRowWiseSum(int arr[][3],int rows, int cols){
//     for(int i=0;i<rows;i++){
//         int sum=0;
//         for(int j=0;j<cols;j++){
//             sum=sum+ arr[i][j];
//         }
//         cout<<sum<<endl;
//     }
// }

// int main(){
//     const int rows = 3;
//     const int cols = 3;
//     int arr[rows][cols] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     printRowWiseSum(arr,rows,cols);
//     return 0;
// }


// //Col wise sum print
// #include <iostream>
// #include <vector>
// using namespace std;

// void printColWiseSum(int arr[][3],int rows ,int cols){
//     //col sum - col wise traversal
//     for(int i=0;i<cols;i++){
//         int sum=0;
//         for(int j=0;j<rows;j++){
//             sum=sum+arr[j][i];
//         }
//         cout<<sum<<endl;
//     }
    
// }
// int main(){
//     const int rows = 3;
//     const int cols = 3;
//     int arr[rows][cols] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     printColWiseSum(arr, rows, cols);
// }

// //Linear Search in 2D array
// #include<iostream>
// using namespace std;
// bool findKey(int arr[][3],int rows,int cols,int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]==key)
//                 return true;
//         }
//     }
//     return false;
// }
// int main(){
//     const int rows = 3;
//     const int cols = 3;
//     int key = 8;
//     int arr[rows][cols];
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>arr[i][j];
//         }
//     }
//     // bool found = findKey(arr, rows, cols, key);
//     // cout << (found ? "Found\n" : "Not Found\n");
//     if(findKey(arr,3,3,key)){
//         cout<<"Found"<<endl;
//     }
//     else{
//         cout<<"Not Found"<<endl;
//     }
//     return 0;
// }

//Max and Min number in an array
// #include<iostream>
// using namespace std;
// int getMax(int arr[][3],int rows,int cols){
//     int maxi=INT8_MIN;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]>maxi)
//                 maxi=arr[i][j];
//         }
//     }
//     return maxi;
// }
// int getMin(int arr[][3],int rows ,int cols){
//     int mini=INT8_MAX;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]<mini){
//                 mini=arr[i][j];
//             }
//         }
//     }
//     return mini;
// }
// int main(){
//     int arr[4][3];
//     int rows=4;
//     int cols=3;
//     //Row Wise Input
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>arr[i][j];
//         }
//     }
//     //Row Wise printing 
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<"Max Number "<<getMax(arr,rows,cols)<<endl;
//     cout<<"Min Number "<<getMin(arr,rows,cols);
// }

//Transpose of a matrix
// #include<iostream>
// using namespace std;
// void transpose(int arr[][3],int r,int c,int transposeArr[][3]){
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             transposeArr[j][i]=arr[i][j];
//         }
//     }
// }
// void printArray(int arr[][3],int r,int c){
//      //Row Wise printing 
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int arr[4][3];
//     int rows=4;
//     int cols=3;
//     //Row Wise Input
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>arr[i][j];
//         }
//     }
   
//     printArray(arr,rows,cols);
//     int transposeArr[3][3];
//     transpose(arr,rows,cols,transposeArr);
//     printArray(transposeArr,rows,cols);
// }