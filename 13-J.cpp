#include<iostream>
using namespace std;
class employee
{
    protected:
    char name[20];
    int salary;
    public:
    void read()
    {
        cout << "Enter Employee Name: " ;
        cin >> name;
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }
    void show()
    {
        cout << "Name " << name << endl;
        cout << "salry: " << salary << endl;
    }
};
class manager: public employee
{
    private:
    char dpt[20];
    public:
    void read1()
    {
        cout << "Enter department: " << endl;
        cin >> dpt;
    }
    void show1()
    {
        cout << "Department: " << dpt << endl;
    }
};
int main()
{
    int choice;
    cout << "Enter Choice: ";
    cin >> choice;
    if(choice == 1)
    {
        employee s1;
        s1.read();
        s1.show();
    }
    else if(choice == 2)
    {
        manager s2;
        s2.read1();
        s2.show1();
    }
    else 
    {
        cout << "Invalid ";
    }
    return 0;
}