#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){    //row
        for(int j=5; j>i; j--){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    for(int i=5; i>=1; i--){    //row
        for(int j=5; j>i; j--){
            cout<<" ";
        }
        for(int k=i; k>=1; k--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}