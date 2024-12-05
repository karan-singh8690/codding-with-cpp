#include<iostream>
using namespace std;
class base
{
    private:
    int a, b, c;
    public:
    void input()
    {
        cout << "Enter the Number: ";
        cin >> a >> b;
    }
    void show()
    {
        c=a+b;
        cout << "sum = " << c << endl;
    }
};
class base1
{
    private:
    int a, b, c;
    public:
    void input1()
    {
        cout << "Enter the Number: ";
        cin >> a >> b;
    }
    void show1()
    {
        c=a-b;
        cout << "Substraction: " << c << endl;
    }
};
class derive:public base,public base1
{
    private:
    int a, b, c;
    public:
    void input2()
    {
        cout << "Enter the value: ";
        cin >> a >> b;
    }
    void show2()
    {
        c=a*b;
        cout << "Multiplication = " << c;
    }
};
main()
{
    derive ob;
    ob.input();
    ob.show();
    ob.input1();
    ob.show1();
    ob.input2();
    ob.show2();
}