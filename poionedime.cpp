#include<iostream>
using namespace std;
int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    // int *ptr = arr;
    // cout << *ptr;
    int matrix[3][3] = {{1 ,2 ,3}, {1 ,2 ,3}, {1 ,2 ,3}};
    int (*ptr)[3] = matrix;
    int sum = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum += *(*(ptr + i) + j);
        }
    }
    cout << "Sum = " << sum;
    return 0;
}