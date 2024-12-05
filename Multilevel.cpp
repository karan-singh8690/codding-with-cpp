#include<iostream>
using namespace std;
class base
{
    protected:
    int a;
    public:
    void input()
    {
        cout << "Enter the value: ";
        cin >> a;
    }
    void display()
    {
        cout << "a = " << a;
    }
};
class drive:public base{
    protected:
    int b;
    public:
    void input1()
    {
        cout << "Enter the number: ";
        cin >> b;
    }
    void display1()
    {
        cout << "b = " << b;
    }
};
class drive1:public drive{
    private:
    int c;
    public:
    void input2()
    {
        cout << "Enter the number: ";
        cin >> c;
    }
    void display2()
    {
    
        //cout << "a = " << a;
        //cout << "b = " << b;
         cout << "c = " << c;
    }
};
main()
{
    //base ob;
    //ob.input();
    //ob.display();

    //drive ob1;
    //ob1.input1();
    //ob1.display1();

    drive1 ob2;
    ob2.input();
    ob2.display();
    ob2.input1();
    ob2.display1();
    ob2.input2();
    ob2.display2();

}
