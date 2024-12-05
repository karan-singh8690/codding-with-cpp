#include<iostream>
using namespace std;
class A
{
    int n;
    public:
    void a()
    {
        n = 10;
        cout << n << endl;
    }
    ~A()
    {
        cout << "destroyed object ";
        cout << n << endl;
    }

};
int main()
{
    A ob, ob1;
    ob.a();
    return 0;
}