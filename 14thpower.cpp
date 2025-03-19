#include <iostream>
#include <cmath> 
using namespace std;


int sumSeries(int x, int n) {
    
    if (n == 0) {
        return 0;
    }
    
    return pow(x, n - 1) + sumSeries(x, n - 1);
}

int main() {
    int sum = sumSeries(2, 5);
    cout << "Sum of the series: " << sum << endl;

    return 0;
}