#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n=5;
    int a[]={1,2,3,4,5};
    cout<<"Before Swap: ";
    for(int z=0; z<5; z++){
    cout<<a[z]<<" ";
    }

    for(int i=0,j=4;i<j;i++,j--){
        swap(a[i],a[j]);
    }

    cout<<endl;
    cout<<"After Swap: ";
    for(int k=0; k<5; k++){
        cout<<a[k]<<" ";
    }
    
}