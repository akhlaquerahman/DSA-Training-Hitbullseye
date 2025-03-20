#include<iostream>
using namespace std;
int main(){
    int size=5,k=7;
    int a[size]={10,20,30,40,50};
    
    for(int i= 0; i<k; i++){
    int first= a[0];                //first=10
    for(int j=0; j<size; j++){
        a[j-1]=a[j];                //a[0]=10,a[1]=20,a[2]=30,a[3]=40,a[4]=50
    }
    a[size-1]= first;               //a[4]=10

    }


    for(int m=0; m<size; m++){
        cout<<a[m]<<" ";
    }
}