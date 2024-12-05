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
        cout << "Enter The Name: " << endl;
        cin >> name;
        cout << "Enter Date of Berth: " << endl;
        cin >> dob;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Date of Berth: " << dob << endl;
    }
};
class doctor:public person
{
    protected:
    char spe[25];
    public:
    void read1()
    {
        cout << "Enter Specilization:" << endl;
        cin >> spe;
    }
    void show1()
    {
        cout << "Specialization: " << spe << endl;
    }
};
class Patient:public doctor
{
    private:
    int cn, doa, dod, bn;
    char disease[25];
    public:
    void read2()
    {
        cout << "Enter Case Number: " << endl;
        cin >> cn ;
        cout << "Enter Diesease : " << endl;
        cin >> disease;
        cout << "Date of Addimission : " << endl;
        cin >> doa;
        cout << "Date of Discharge: " << endl;
        cin >> dod;
        cout << "Bill Number: " << endl;
        cin >> bn;
    }
    void show2()
    {
        cout << "Case Number: " << cn << endl;
        cout << "Diesease: " << disease << endl;
        cout << "Date of Addimission : " << doa << endl;
        cout << "Date of Discharge: " << dod << endl;
        cout << "Bill Number: " << bn << endl;
    }
};
int main()
{
    Patient s1;
    s1.read();
    s1.read1();
    s1.read2();
    s1.show();
    s1.show1();
    s1.show2();
    return 0;
}