#include<iostream>
using namespace std;
int main() {
    int n,even = 0,odd=0;
   
    cout<<"Enter size: ";
    cin >> n;
    int a[n];

    
    for(int i=0; i<n; i++){
        cout<<"Enter Element: ";
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0 ) {
            even++;
            }
            else{
                odd++;
            }
    }
    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;
}