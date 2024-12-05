#include <iostream>
using namespace std;

int main() {
    // Declare a 2D array of integers with 3 rows and 4 columns
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Access and display each element in the 2D array
    cout << "2D Array (Matrix) elements:" << endl;
    for (int i = 0; i < 3; i++) {       // Loop through each row
        for (int j = 0; j < 4; j++) {   // Loop through each column in the row
            cout << "Element at [" << i << "][" << j << "] : " << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Modify an element in the 2D array
    matrix[1][2] = 42;  // Change the element in the second row, third column

    // Display the array after modification
    cout << "\n2D Array after modification:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Element at [" << i << "][" << j << "] : " << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
