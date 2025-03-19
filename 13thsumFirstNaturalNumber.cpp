#include<iostream>
using namespace std;

int sumOfFirstnatural(int n ){
    if(n==1){
        return 1;
    }
    return n+sumOfFirstnatural(n-1);
}

int main(){
    int n = 5;
    int sum = sumOfFirstnatural(n);
    cout<<sum;
}