//1.Solid Rectangle
// #include <iostream>
// using namespace std;
// int main(){
//     for(int row=0;row<3;row++){
//         for(int col=0;col<5;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//2. Square pattern
// #include <iostream>
// using namespace std;
// int main(){
//     for(int row=0;row<4;row++){
//         for(int col=0;col<4;col++){
//             cout<<"* ";

//         }
//         cout<<endl;
//     }
//     return 0;
// }
//3 Hollow Rectangle
// #include<iostream>
// using namespace std;
// int main(){

//     for(int row=0;row<3;row++){
//         if(row==0||row==2){//first or last row
//             for(int col=0;col<5;col++){
//                 cout<<"* ";
//             }
//         }
//         else{//remaining rows
//             cout<<"* ";//first row
//             for(int i=0;i<3;i++){//spaces
//                 cout<<"  ";
//             }
//             cout<<"* ";//last star
//         }
//         cout<<endl;
//     }
// }

//4. generic code hollow rectangle
// #include<iostream>
// using namespace std;
// int main(){
//     int rowcount,colcount;
//     cin>>rowcount;
//     cin>>colcount;

//     for(int row=0;row<rowcount;row++){
//         if(row==0||row==rowcount-1){//first or last row
//             for(int col=0;col<rowcount;col++){
//                 cout<<"* ";
//             }
//         }
//         else{//remaining midddle middle rows
//             cout<<"* ";
//             for(int col=0;col<rowcount-2;col++){
//                 cout<<"  ";
//             }
//             cout<<"* ";
//         }
//         cout<<endl;

//     }
// }

//5. half Pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;//no of rows
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<row+1;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//6.Inverted half Pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;//no of rows
//     cin>>n;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<n-row;col++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }