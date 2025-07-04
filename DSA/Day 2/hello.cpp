// #include<iostream>
// int main(){
//     std::cout << "Hello World!"<<std::endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     cout<< "Enter a number : "<<endl;
//     cout.flush(); // Ensure prompt is displayed before input
//     int n;
//     cin >> n;
//     cout<< "The number you entered is :" <<n<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a=5;
//     cout<<"Value of a is : "<<a<<endl;

//     char ch='a';
//     cout<< "value of ch is : "<<ch<<endl;

//     bool flag=true;
//     cout<< "Value of flag is : "<<flag<<endl;

//     int b=5;
//     cout<< "Value of b is :"<<a <<endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    // char ch=97; // Implicit conversion
    // cout<<ch<<endl;

    // int num ='b';
    // cout<<num<<endl;

    // //explcit conversion
    // double d=3.14;
    // int x= (int)d +2;
    // cout<<"value of x is "<<x<<endl;
    // return 0;

    //operators
    int a=5;
    int b=3;

    cout<<a+b<<endl;
    cout<<a-b<<endl;
    cout<<a*b<<endl;
    cout<<a/b<<endl;
    cout<<a%b<<endl;
    cout<<a++<<endl; // Post-increment
    cout<<a<<endl; // a is now 6
    cout<<++a<<endl; // Pre-increment       
    cout<<a--<<endl; // Post-decrement
    cout<<a<<endl;  // a is now 5       
    cout<<--a<<endl; // Pre-decrement
    cout<<a<<endl;  // a is now 4   
    cout<<a<<b<<endl; // Output both a and b

    cout<< (a<b)<<endl;
    cout<< (a>b)<<endl;
    cout<< (a==b)<<endl;
    cout<< (a!=b)<<endl;
    cout<< (a<=b)<<endl;
    cout<< (a>=b)<<endl;


}