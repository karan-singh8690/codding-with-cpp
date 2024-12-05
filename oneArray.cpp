#include <iostream>
using namespace std;

int main() {
    // Declare an array of integers with 5 elements
    int numbers[5] = {1, 2, 3, 4, 5};

    // Access and display each element in the array
    cout << "Array elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " : " << numbers[i] << endl;
    }

    // Modify an element in the array
    numbers[3] = 10;  // Change the value of the element at index 3

    // Display the array after modification
    cout << "\nArray after modification:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " : " << numbers[i] << endl;
    }

    return 0;
}
