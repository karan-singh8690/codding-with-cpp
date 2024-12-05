#include<iostream>
using namespace std;
class person
{
    protected:
    char name[20];
    int dob;
    public:
    void read()
    {
        cout << "Enter Name: " ;
        cin >> name;
        cout << "Enter year of Birth: ";
        cin >> dob;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Year of Birth: " << dob << endl;
    }
};
class student: public person{
    private:
    char cn[20];
    int fee;
    public:
    void read1()
    {
        read();
        cout << "Enter course Name: "; 
        cin >> cn;
        cout << "Enter Course Fee: " << endl;
        cin >> fee;
    }
    void show1()
    {
        show();
        cout << "course: " << cn << endl;
        cout << "Fee: " << fee << endl;
    }
};
class instructor: public person
{
    private:
    int salary;
    public:
    void read2()
    {
        read();
        cout << "Enter Salry: " << endl;
        cin >> salary;
    }
    void show2()
    {
        show();
        cout << "Salary: " << salary << endl;
    }
};
int main()
{
    int choice;
    cout << "Enter Your Choice: " << endl;
    cin >> choice;
    if(choice == 1)
    {
        student s1;
        s1.read1();
        s1.show1();
    }
    else if(choice == 2)
    {
        instructor s2;
        s2.read2();
        s2.show2();
    }
    else{
        cout << "Invlid Details ";
    }
    return 0;
}