// TCS coding test
#include<iostream>
using namespace std;
int main()
{
    int v,w;
    cout<<"Enter vehicle: ";
    cin>>v;
    cout<<"Enter wheel: ";
    cin>>w;
    if(w>=2 && w%2==0 && v<w ){ //use constraints(formula)
        cout<<"Invalid Input";
        }    
    else{   
    int FW = (w-2*v)/2;         // this is formula
    int TW =v-FW;               // this is formula
    cout<<endl;
    cout<<"Four Wheeler: "<<FW<<""<<endl;
    cout<<"Two wheeler: "<<TW<<"";
    }
    
}
