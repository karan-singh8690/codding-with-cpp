#include<iostream>
using namespace std;
void show(int num[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter the size: ";
    cin >> size;
    int number[size] = {1 ,2 ,3, 4, 5};

    show(number, size);

    return 0;
}