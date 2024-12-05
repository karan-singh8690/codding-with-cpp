#include<iostream>
using namespace std;
class Box{
    private:
    int width;
    public:
    Box(int w): width(w){}
    friend int getWidth(Box b);
};
int getWidth(Box b)
{
    return b.width;
}
int main() {
    Box b(10);  // Create an object of class Box
    cout << "The width of the box is: " << getWidth(b) << endl;  // Accessing width through the friend function
    return 0;
}
