#include<iostream>
using namespace std;
int main(){
    int T;
    cout<<"enter size of array: ";
    cin >> T;
    int E[T],L[T];
    cout<<"enter entry person: ";
    for(int i = 0; i < T; i++){
        cin>>E[i];
    }
    cout<<endl;
    
    cout<<"enter exit person: ";
    for(int j = 0; j < T; j++){
        cin>>L[j];
    }
    
    int guest =0;
    int max_guest=0;
    for(int i = 0; i < T; i++){
        guest =guest+E[i]-L[i];
        if(guest>max_guest){
            max_guest=guest;
            }
    }
    cout<<"max guest: "<<max_guest;
}