#include<iostream>
using namespace std;
class cement
{
    protected:
    int bags;
    public:
    void read()
    {
        cout << "Enter nomber of Bags: " << endl;
        cin >> bags;
    }
};
class steel
{
    protected:
    int tons;
    public:
    void read()
    {
        cout << "Enter Number of tons: " << endl;
        cin >> tons;
    }
};
class wood
{
    protected:
    int feet;
    public:
    void read()
    {
        cout << "Cubic Feet of per Costing " << endl;
        cin >> feet;
    }
};
class house:public cement, public steel, public wood
{
    private:
    int cal;
    public:
    void value()
    {
        cement::read();
        steel::read();
        wood::read();
        cal = bags*150 + feet*1500 + tons*28000;
    }
    void show()
    {
    cout << "Cost of Consruction : " << cal << endl;
    }
};
int main()
{
     house s1;
     s1.value();
     s1.show();
     return 0;
}