#include<iostream>
using namespace std;
int main(){
    int size=5,k=1;
    int a[size]={10,20,30,40,50};
    
    for(int i= 0; i<k; i++){
    int last= a[size-1];                //last=50
    for(int j=size-2; j>=0; j--){
        a[j+1]=a[j];                //a[0]=50,a[1]=10,a[2]=20,a[3]=30,a[4]=40
    }
    a[0]= last;               //a[4]=50

    }


    for(int m=0; m<size; m++){
        cout<<a[m]<<" ";
    }
}