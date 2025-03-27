#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int matrix[ROWS][COLS];

    // Take input for the matrix
    cout << "Enter the elements of the 3x3 matrix row by row:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Enter element at position (" << i+1 << "," << j+1 << "): ";
            cin >> matrix[i][j];
        }
    }

    // Print the matrix
    cout << "\nThe matrix you entered is:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Calculate and print column sums
    cout << "\nSum of each column:" << endl;
    for (int j = 0; j < COLS; j++) {
        int colSum = 0;
        for (int i = 0; i < ROWS; i++) {
            colSum += matrix[i][j];
        }
        cout << "Sum of col." << j+1 << ": " << colSum << endl;
    }

    return 0;
}