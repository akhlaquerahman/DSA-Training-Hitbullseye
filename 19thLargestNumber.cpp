#include<iostream>
using namespace std;

int main(){
    int n,largest=0;
   
    cout<<"Enter size: ";
    cin >> n;
    int a[n];

    
    for(int i=0; i<n; i++){
        cout<<"Enter Element: ";
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            largest=a[i];
            }
            
    }
    cout << "Largest numbers: " << largest << endl;
    
}