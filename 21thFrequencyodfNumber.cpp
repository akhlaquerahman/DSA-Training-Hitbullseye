#include<iostream>
using namespace std;

int main(){
    int n,frequency,count=0;
    cout<<"Enter Size Of Array: ";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cout<<"Enter Element according Size: ";
        cin>>a[i];
    }
    cout<<"Write Number which is find frequency: ";
    cin>>frequency;
    for(int i=0; i<n; i++){
        if(a[i]==frequency){
            count++;
        }
    }
    cout<<count;

}