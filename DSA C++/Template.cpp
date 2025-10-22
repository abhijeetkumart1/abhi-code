#include<iostream>
using namespace std;
int main(){
    
    return 0;
}

#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int arr[4][3];
    int rows=4;
    int cols=3;
    //Row Wise Input
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    //Row Wise printing 
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    
}