#include<iostream>
using namespace std;
class A
{
    public:
    virtual void fun()
    {
        cout << "Karan Singh";
    }

};
class B:public A
{
    public:
    void fun()
    {
        cout << "Karan Singh Rajput";
    } 
};
int main()
{
    A *ptr;
    B ob;
    ptr = &ob;
    ptr->fun();
    return 0;
}