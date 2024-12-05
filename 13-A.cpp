#include<iostream>
using namespace std;
class basic
{
    protected:
    int code;
    char name[20];
    char address[20];
    public:
    void read()
    {
        cout << "Enter Code:" << endl;
        cin >> code;
        cout << "Enter Name:" << endl;
        cin >> name;
        cout << "Enter Address:" << endl;
        cin >> address;
    }
    void show()
    {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};
class salary:public basic
{
    private:
    int pay;
    int tax;
    int sal;
    public:
    void read1()
    {
        cout << "Enter Payment:" << endl;
        cin >> pay;
        cout << "Enter Tax:" << endl;
        cin >> tax;
    }
    void cal()
    {
        sal = pay - tax;
    }
    void show1()
    {
        cout << "Payment:" << pay << endl;
        cout << "Tax:" << tax << endl;  
        cout << "Net Salry:"  << sal << endl;      
    }
};
int main()
{
    salary s1;
    s1.read();
    s1.read1();
    s1.cal();
    s1.show();
    s1.show1();
    return 0;
}