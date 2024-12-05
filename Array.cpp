
#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "Enter the Array";
    
    for(int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
}