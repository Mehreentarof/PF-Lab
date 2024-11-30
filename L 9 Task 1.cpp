#include<iostream>
using namespace std;
int main(){
    
    string matrix[4][4]={
        {"a","b","c","d"},
        {"e","f","g","i"},
        {"A","B","C","D"},
        {"E","F","G","I"}
    };
    for(int i=0;i<4; i++){
        for(int j=0; j<4; j++){
            cout<<matrix[i][j];
        }
      cout<<endl;
    }
     
    return 0;
}