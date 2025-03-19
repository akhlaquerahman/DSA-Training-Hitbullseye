#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin >> n;
    int a[n];
    int sum = 0;
    
    for(int i =0; i<n; i++){
        cout<<"Enter Element: ";
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        sum+=a[i];
        
    }
    cout<<"These are Array Element: "<<sum;
}