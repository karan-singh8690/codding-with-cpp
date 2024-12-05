#include <iostream>
using namespace std;

int main() {
    // Declare a 3D array with dimensions 2x3x4
    int array[3][3][3];

    // Get input from the user to fill the 3D array
    cout << "Enter 24 elements for a 3x3x3 array:" << endl;
    for (int i = 0; i < 3; i++) {          // Loop through depth
        for (int j = 0; j < 3; j++) {      // Loop through rows
            for (int k = 0; k < 3; k++) {  // Loop through columns
                
                cin >> array[i][j][k];
            }
        }
    }

    // Display the 3D array elements
    cout << "\nThe 3D Array elements are:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cout  << array[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;  // Newline to separate each "depth" level
    }

    return 0;
}
