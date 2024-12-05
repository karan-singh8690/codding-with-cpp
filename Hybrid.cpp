#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    void input()
    {
        cout << "Enter value: ";
        cin >> a;
    }
    void show()
    {
        cout << "a = " << a << endl;
    }
};
class B:public A
{

};
class C:public A
{

};
class D:public A{

};
main()
{
    A ob; B ob1; C ob2; D ob3;
    ob.input();
    ob.show();
}