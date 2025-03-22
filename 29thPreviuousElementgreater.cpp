#include <iostream>
using namespace std;

int main() {
    int arr[] = {7, 2, 4, 8, 9,10,5,15,3};
    int size = sizeof(arr) / sizeof(arr[0]); 

    int count = 1; 
    int maxSoFar = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxSoFar) {
            count++;
            maxSoFar = arr[i];
        }
    }

    cout << "Number of elements greater than all previous elements: " << count << endl;

    return 0;
}