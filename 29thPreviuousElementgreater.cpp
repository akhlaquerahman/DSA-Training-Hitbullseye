#include <iostream>
using namespace std;

int main() {
    int arr[] = {7,9,5,14,25,18,8,4,2,3};
    int size = sizeof(arr) / sizeof(arr[0]); 

    int count = 1; 
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            count++;
            max = arr[i];
        }
    }

    cout << "Number of elements greater than all previous elements: " << count << endl;

    return 0;
}