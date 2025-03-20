#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of arry: ";
    cin>>size;
    int arr[size];

    
    cout<<"Enter element: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    int find;
    cout<<"Enter Find Element: ";
    cin>>find;
    cout<<"This is Elemnet: ";
    for(int j=0; j<size; j++){
        if(arr[j]==find){
            cout<<arr[j]<<endl<<"Index is: "<<j;
        }
    }
}