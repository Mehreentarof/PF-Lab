#include <iostream>
using namespace std;
int main(){
    int sum=0; 
    int matrix[3][3];
    for(int i=0; i<3; i++){         
        for(int j=0; j<3; j++){
            cout<<"Enter elements["<<i<<"]["<<j<<"]:";
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
     sum=sum+matrix[i][j];
     }
    }
    
    cout<<"Sum of all elements in matrix:"<<sum<<endl;
    return 0;
}

