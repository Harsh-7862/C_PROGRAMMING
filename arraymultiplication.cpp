#include <iostream>
using namespace std;

const int SIZE = 10; // Define the size of the array

int main() {
    int arr[SIZE][SIZE]; // Declare the 2D array

    // Initialize the array with the product of the row and column index
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            arr[i][j] = (i+1) * (j+1);
        }
    }

    // Display the multiplication table
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
