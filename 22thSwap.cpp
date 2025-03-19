#include<iostream>
using namespace std;
int main() {
    int a=2,b=4;
    int temp;

    // temp=a;
    // a=b;
    // b=temp;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<a<<" "<<b;
}