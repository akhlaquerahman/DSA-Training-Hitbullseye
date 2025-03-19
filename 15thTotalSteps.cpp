#include<iostream>
using namespace std;

int TotalSteps(int n){          // n = total steps of staires
    if(n==0 || n==1){
        return 1;
    }
    return TotalSteps(n-1)+TotalSteps(n-2);  // total way of climbing staires
}

int main(){
    int n =5;
    cout << "Total steps for " << n << " is " << TotalSteps(n);
}