//Arithmatic operation with mixed data type
#include<iostream> //Including the input-output stream header file
#include<iomanip>//Including the header file for formatting
using namespace std; //Using the standered namespace
int main() //Start of the main function
{
    int m1 = 5, m2 = 7; // Declaring and initializing two integers
    double d1 = 3.7, d2 = 8.0;// Declaring and initializing two doubles
    cout << fixed << setprecision(1); // Setting the floating-point output to fixed with 1 decimal place
    //performing arithmatic operations and displaying result
    cout << " " << m1 << " + " << m2 << " = " << m1 + m2 << endl; //addition of integers
    cout << " " << d1 << " + " << d2 << " = " << d1 + d2 << endl; //addition of doubles
    cout << " " << m1 << " + " << d2 << " = " << m1 + d2 << endl; //addition of an integer and a double

    cout << " " << m1 << " - " << m2 << " = " << m1 - m2 << endl; //subtraction of integers
    cout << " " << d1 << " - " << d2 << " = " << d1 - d2 << endl; //subtraction of doubles
    cout << " " << m1 << " - " << d2 << " = " << m1 - d2 << endl; //subtraction of an integr and a double

    cout << " " << m1 << " * " << m2 << " = " << m1 * m2 << endl; //multiplication of integers
    cout << " " << d1 << " * " << d2 << " = " << d1 * d2 << endl; //multiplication of doubles
    cout << " " << m1 << " * " << d2 << " = " << m1 * d2 << endl; //multiplication of an integer and a double

    cout << " " << m1 << " / " << m2 << " = " << m1 / m2 << endl; //Integer division 
    cout << " " << d1 << " / " << d2 << " = " << d1 / d2 << endl; //Division of doubles
    cout << " " << m1 << " / " << d2 << " = " << m1 / d2 << endl; //Division of an integer and a double
    cout << endl; //Ouputting a blank line for better readeable
    return 0; // Returning 0 to indicate successful program execution
} //end of the main function