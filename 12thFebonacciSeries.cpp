#include<iostream>
using namespace std;

   int faboncciSeries(int n){
    int fabo=0;
    for(int i=0; i<=n; i++){
        fabo = fabo + i;
        cout<<fabo<<" ";
    }
   }

int main(){
    faboncciSeries(5);
}