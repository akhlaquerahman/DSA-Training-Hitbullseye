#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int count = n*(n+1)/2;
    for(int i = n; i>=1; i--){    //row
        for(int j = 1; j<=i; j++){  //colm
            cout <<count <<" ";
            count--;
    }
    cout << endl;
}
}