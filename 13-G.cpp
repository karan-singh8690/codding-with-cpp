#include<iostream>
#include<string>
using namespace std;
class language
{
    protected:
    string name;
    public:
    virtual void read1() = 0;
};
class natural:public language{
    public:
    void setname(string langname)
    {
        name = langname;
    }
    void read1() override
    {
        cout << name << "is a natural language. " << endl;
    }
};
class formal: public language
{
    public:
    void setname(string langname)
    {
        name = langname;
    }
    void read1() override
    {
        cout << name << "is a formal language " << endl;
    }
};
class classical: public language
{
    public:
    void setname(string langname)
    {
        name = langname;
    }
    void read1() override
    {
        cout << name << "is a classical language " << endl;
    }
};
int main()
{
    natural n1, n2, n3, n4;
    formal f1, f2;
    classical c1, c2;
    n1.setname("English");
    n2.setname("French");
    n3.setname("Chinese");
    n4.setname("Korean");
    f1.setname("C");
    f2.setname("C++");
    c1.setname("Greek");
    c2.setname("Latin");
    cout << "language Category: " << endl;
    cout << "Natural language: " << endl;
    n1.read1();
    n2.read1();
    n3.read1();
    n4.read1();
    cout << "Foraml language: " << endl;
    f1.read1();
    f2.read1();
    cout << "Classical Language " << endl;
    c1.read1();
    c2.read1();
    return 0;
}