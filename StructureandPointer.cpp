/*struct Structure_name{
datatype;
datatype
};*/
#include<iostream>
#include<cstring>
using namespace std;
struct Student{
    string name;
    int age;
};
Student *createStudent(string name, int age){
    Student *s = new Student;
    s->name = name;
    s->age = age;
    return s;
}
int main()
{
    Student *student = createStudent("Karan", 19);
    cout << "Name: " << student->name << ", Age: = " << student->age << endl;
    delete student;
    return 0;
}