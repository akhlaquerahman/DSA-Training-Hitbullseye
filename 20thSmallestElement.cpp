#include<iostream>
using namespace std;

int main(){
    int n;
   
    cout<<"Enter size: ";
    cin >> n;
    int a[n];
    int smallest=a[0];

    
    for(int i=0; i<n; i++){
        cout<<"Enter Element: ";
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < smallest) {
            smallest=a[i];
            }
            
    }
    cout << "Largest numbers: " << smallest << endl;
    
}