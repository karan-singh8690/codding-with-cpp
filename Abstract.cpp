#include<iostream>
using namespace std;
class Shape
{
    public:
    virtual void draw() = 0;
    void disp()
    {
        cout << "drawing Rectangle";
    }
};
class Circle:public Shape
{
    public:
    void draw(){
        cout << "Drawing Circle " << endl;
    }
};
int main()
{
    Shape ob;
    ob.disp();
}