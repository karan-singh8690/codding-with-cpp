#include<iostream>
using namespace std;
class base
{
    protected:
    int a, b;
    public:
    void input()
    {
        cout << "Enter the Number: " << endl;
        cin >> a >> b;
    }
    /*void show()
    {
        cout << "a " << a << " " << "b " << b;
    }*/
};
class drive:public base{
    private:
    int m, n;
    public:
    void getdata()
    {
        cout << "enter the second number " << endl;
        cin >> m >> n;
    }
    void display()
    {
        cout << "m " << m << " " << "n " << n;
        cout << "a " << a << " " << "b " << b;
    }
};
main()
{
    base ob;
    drive ob1;
    ob1.input();
    //ob1.show();

    ob1.getdata();
    ob1.display();
    return 0;
}