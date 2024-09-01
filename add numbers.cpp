//Print the sum of two numbers using variables
#include<iostream>        // including the input-output stream header file
using namespace std;      //using the standered namespace 
int main()                // start of the main function
{
    cout << "Sum of two numbers :\n"; //outputting the print message and separator line
    int a;               //Declaration of integer variable 'a'
    int b;               //Declaration of integer variable 'b'
    int sum;             //Declaration of integer variable 'sum'
    a = 29;              //Assigning value 29 to variable 'a'
    b = 30;              //Assigning value 30 to variable 'a'
    sum = a + b;         //Calculation the sum of 'a' and 'b' and assigining it to 'sum'
    cout << "The sum of " << a << " and " << b << " is: " << sum << "\n\n"; //outputting the calculated sum
    return 0;            //Returning 0 to indicate successful program execution
}                        //end the main function