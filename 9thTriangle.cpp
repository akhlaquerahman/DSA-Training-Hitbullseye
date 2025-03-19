#include<iostream>
using namespace std;
int main(){
    for(int i=5; i>=1; i--){    //row
        for(int j=5; j>i; j--){
            cout<<" ";
        }
        for(int k=i; k>=1; k--){
            cout<<k;
        }
        cout<<endl;
    }
}

//output
// 54321
//  4321
//   321
//    21
//     1