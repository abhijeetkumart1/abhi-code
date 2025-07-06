//Bitwise operator
// #include<iostream>
// using namespace std;
// int main(){
//     bool a=false;
//     bool b=true;
//     cout<<(a|b)<<endl;
//     cout<<(a^b)<<endl;
//     cout<<(5&10);
    
// }

//Left shift and Right shift operator
// #include<iostream>
// using namespace std;
// int main(){
//     int a=12;
//     a=a<<1; //left shift
//     cout<<a<<endl;
//     a=a<<2;
//     a=a<<3;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=3;
//     a=a>>1;
//     cout<<a<<endl;
// }

//Pre post increment operator
// #include<iostream>
// using namespace std;
// int main(){
//     int a=11;
//     cout<<a<<endl;
//     cout<<++a<<endl;
//     cout<<a++<<endl;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     cout<<(++a)*(++a);
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=3;
//     int b=4;
//     int c=(--a)*(b++);
//     cout<<c;
// }

//Break is used to exit from loop
//statement written below continue is not executed .
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=0;i<n;i++){
//         cout<<"Babbar"<<endl;
//         break;
//     }
//     cout<<"Love";
// }

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0;i<5;i++){
//         continue;
//         cout<<"Abhi";
//     }
// }

//variable scoping
// #include<iostream>
// using namespace std;
// int main(){
//     int a;//declaration
//     int b=5;//initialistaion
//     b=10;
//     // int b=10;//redeclaration not allowed

//     if(true){
//         int b=15;
//         cout<<b<<endl;
//     }
//     cout<<b<<endl;
// }

//Switch Case
// #include<iostream>
// using namespace std;
// int main(){
//     int val;
//     cout<<"Enter the value :";
//     cin>>val;
//     switch(val){
//         case 1: cout<<"love";
//         case 2: cout<<"Abhi";
//         case 3: cout<<"Ram ";
//         case 4: cout<<"riya";
//         case 5: cout<<"arya";
//         break;
//         default:cout<<"OM";
        
//     }
// }