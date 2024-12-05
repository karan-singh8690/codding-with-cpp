#include<iostream>
using namespace std;
class base
{
    private:
    int a, b;
    public:
    void input()
    {
        cout << "Enter the Number: ";
        cin >> a >> b;
    }
    void show()
    {
        cout << "sum = " << a+b << endl;
    }
};
class derive:public base{
    private:
    int n;
    public:
    void input1()
    {
        cout << "enter the value: ";
        cin >> n;
    }
    void show1()
    {
        cout << "n = " << n << endl;
    }
};
class derive1:public base{
    private:
    int n1;
    public:
    void input2()
    {
        cout << "Enter the Number: ";
        cin >> n1;
    }
    void show2()
    {
        cout << "n1 = " << n1;
    }
};
main()
{
    derive ob;
    derive1 ob1;
    ob.input();
    ob.show();
    ob.input1();
    ob.show1();
    ob1.input2();
    ob1.show2();
}