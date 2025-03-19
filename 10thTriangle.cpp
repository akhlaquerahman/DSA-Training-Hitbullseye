#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){    //row
        for(int j=5; j>i; j--){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<char(k+64)<<" ";
        }
        cout<<endl;
    }
}

//output
//      A 
//     A B 
//    A B C 
//   A B C D 
//  A B C D E 