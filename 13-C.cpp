#include<iostream>
using namespace std;
// class part_time_student: public student, public Employee
// {
//     private:
//     int hw;
//     public:
//     void read()
//     {
//         student::read1();
//         Employee::read2();
//         cout << "Enter Working Hours:" << endl;
//         cin >> hw;
//     }
//     void show()
//     {
//         student::show1();
//         Employee::show2();
//         cout << "Enter Working Hours:" << hw << endl;
//     }
// };
class student
{
    protected:
    int rn;
    char name[25];
    char course[30];
    public:
    void read1()
    {
        cout << "Enter Roll No. : " << endl;
        cin >> rn;
        cout << "Enter Sudent name:" << endl;
        cin >> name;
        cout << "enter Course : " << endl;
        cin >> course ;
    }
    void show1()
    {
        cout << "Roll no. " <<  rn << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};
class Employee
{
    protected:
    int code;
    int salary;
    public:
    void read2()
    {
        cout << "Enter Employee code : " << endl;
        cin >> code;
        cout << "Enterr salary: " << endl;
        cin >> salary;
    }
    void show2()
    {
        cout << "Code: " << code << endl;
        cout << "Salary: " << salary << endl;
    }
};
class part_time_student: public student, public Employee
{
    private:
    int hw;
    public:
    void read()
    {
        student::read1();
        Employee::read2();
        cout << "Enter Working Hours:" << endl;
        cin >> hw;
    }
    void show()
    {
        student::show1();
        Employee::show2();
        cout << "Enter Working Hours:" << hw << endl;
    }
};
int main()
{
    part_time_student s1;
    s1.read();
    
    s1.show();
    
    return 0;
}