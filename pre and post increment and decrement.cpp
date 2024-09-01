//Write a program to display the operation of pre and post increment and decrement
#include<iostream> //including the input-output stream header file
using namespace std; //using the standered namespace
int main() //start of the main function
{
    int num = 57; //initializing an integer variable 'num' with the value 57
    cout << "the number is : " << num  << endl; //displaying the initial value of 'num'
    num++; //post-incrementing 'num' by 1
    cout << " ater the post incrementing by 1 the number is : " << num << endl; //displaying the number after the post incrementing
    ++num; //pre incrementing 'num' by 1
    cout << " after the pre incrementing by 1 the number is : " << num << endl; //displaying the number after the pre incrementing
    num = num + 1; //increasing 'num' by 1
    cout << " after the increasing by 1 the number is : " << num << endl; //displaying 'num' after increasing by 1
    num--; //post-decrmenting 'num' by 1
    cout << "ater the post decrmenting by 1 the number is : " << num << endl; //displaying the number after the post decrementing
    --num; //pre decrementing 'num' by 1
    cout << " after the pre decrementing by 1 the number is : " << num << endl; //displaying the number after the pre decrementing
    num = num - 1; //decreasing 'num' by 1
    cout << " after the decreasing by 1 the number is : " << num << endl; //displaying 'num' after decreasing by 1
    cout << endl; //outputting  a blank line for better readeable
    return 0; //returning 0 to indicate successful program execution
} // end of the main function