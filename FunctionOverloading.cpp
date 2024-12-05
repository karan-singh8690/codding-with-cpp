/*class class-name
{
public:
void add()
{
}
void add(int a)
{
}
};*/
#include<iostream>
using namespace std;
    void fun()
    {
        int num1 = 20, num2 =30;
        int sum=num1 + num2;
        cout << "Sum = " << sum << endl;;

    }
    void fun(int a, int b)
    {
        int sub = a - b;
        cout << "Sub = " << sub << endl;

    }

int main()
{
    
    fun();
    fun(100, 20);
    return 0;
}