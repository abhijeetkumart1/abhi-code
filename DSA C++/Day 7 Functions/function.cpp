//functions
// #include<iostream>
// using namespace std;
// void printName(int n){ //function declaration
//     for(int i=0;i<n;i++){
//         cout<<"Abhi"<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     printName(n); //function call
//     return 0;
// }

//write a function to add two add two numbers 
// #include<iostream>
// using namespace std;
// int add(int a,int b){//function declaration
//     int result=a + b;
//     return result;
// }
// int main(){ //function call/invoke
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//     int sum=add(a,b);
//     cout<<"Addition result "<<sum<<endl;
//     return 0;
// }

//Find max of three numbers
// #include<iostream>
// using namespace std;
// int findMax(int num1,int num2,int num3){
//     if(num1>num2 && num1>>num3){
//         return num1;
//     }
//     else if(num2>num1 &&num2>num3){
//         return num2;
//     }
//     else{
//         return num3;
//     }
// }
// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     int maximumNumber= findMax(a,b,c);
//     cout<<maximumNumber <<endl;
//     return 0;
// }

//counting from 1 to n
// #include <iostream>
// using namespace std;
// void printCounting(int n){//n is a parameter
//     for(int i=1;i<=n;i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     printCounting(n);//n is an argument
//     return 0;
// }

//Write a function of student and grade problem
// #include<iostream>
// using namespace std;
// char getGrade(int marks){
//     if(marks>=90){
//         return 'A';
//     }
//     else if(marks>=80){
//         return 'B';
//     }
//     else if(marks>=70){
//         return 'C';
//     }
//     else if(marks>=60){
//         return 'D';
//     }
//     else{
//         return 'E';
//     }
// }
// int main(){
//     int marks;
//     cout<<"enter the marks : "<<endl;
//     cin>>marks;
//     char finalGrade=getGrade(marks);
//     cout<<finalGrade<<endl;
//     return 0;
// }

//Sum of n numbers
// #include<iostream>
// using namespace std;
// int getSum(int n){
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum=sum+i;
//     }
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"Enter the value of n "<<endl;
//     cin>>n;
//     int ans=getSum(n);
//     cout<<"Sum upto "<< n <<"is "<<ans<<endl;
//     return 0;
// }
//Sum of n even numbers
#include<iostream>
using namespace std;
int getEvenSum(int n){
    int sum=0;
    for(int i=2;i<=n;i=i+2){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    int ans=getEvenSum(n);
    cout<<"Sum upto "<< n <<" is "<<ans<<endl;
    return 0;
}

//Display area of a circle
//write a function to display given no is odd or even
//write a function to find the factorial of a number 
// check the given no is prime or not
//print all no from 1 to n
//LC Reverse an Integer