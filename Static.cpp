#include<iostream>
using namespace std;
class A
{
    int a;
    static int b;
    public:
    A(int x, int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
    static void disp()
    {
        cout << b;
    }
};
int A::b=300;
int main()
{
    A ob(10, 20);
    A ob1(100, 200);
    ob.show();
    A::disp();
    return 0;
}