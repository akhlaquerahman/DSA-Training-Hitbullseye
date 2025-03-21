#include<iostream>
using namespace std;
int main(){
    int numbers[]={2,7,11,15};
    int n = sizeof(numbers)/sizeof(numbers[0]);
    int target = 22;
    for(int i=0,j=n-1; i<n; i++,j--){
            if(numbers[i]+numbers[j]==target){
                cout<<"Pair found: "<<i<<" "<<j<<endl;
                break;
            }
            else if(numbers[i]+numbers[j]>target){
                j--;
            }
            else if(numbers[i]+numbers[j]<target){
                j++;
            }
        
    }

}