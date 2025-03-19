#include <iostream>
using namespace std;

// Function to calculate the factorial of a number using recursion
int factorial(int n){
    // Base case: if n is 0 or 1, return 1 (since 0! and 1! are both 1)
    if (n == 1 || n == 0)
    {
        return 1;
    }
    // Recursive case: multiply n by the factorial of (n-1)
    return n * factorial(n - 1);
}

// Main function
int main()
{
    // Define the number for which we want to calculate the factorial
    int n = 5;
    
    // Call the factorial function and store the result in 'fact'
    int fact = factorial(n);
    
    // Output the result
    cout << "Factorial of " << n << " is " << fact;
    
    return 0; // Indicates successful program termination
}