#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    void setName(string n)
    {
        name = n;
    }
    void display()
    {
        cout << "Student Name: " << name << endl;
    }
};
int main()
{
    Student s;
    s.setName("Karan");
    s.display();
    return 0;
}