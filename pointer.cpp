#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p; //pointer to ppointer
    cout << q << endl;
    cout << *q << endl;
    cout << **q << endl;
    cout << &q << endl;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << *p << endl;
    return 0;
}