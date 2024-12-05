#include<iostream>
using namespace std;
class train
{
    protected:
    int tn, s, nob, des;
    public:
    void read1()
    {
        cout <<"Enter Train Number: " << endl;
        cin >> tn;
        cout << "Enter Source: " << endl;
        cin >> s;
        cout << "Enter Destination: " << endl;
        cin >> des;
        cout << "Enter Number of boggis: " << endl;
        cin >> nob;
    }
    void show1()
    {
        cout << "Trin Number: " << tn << endl;
        cout << "Source: " << s << endl;
        cout << "Destination: " << des << endl;
        cout << "Boggis: " << nob << endl;
    }
};
class passenger_train: public train
{
    private:
    int nopb;
    public:
    void read2()
    {
        cout << "Enter Number of Passenger per Boggy: " << endl;
        cin >> nopb;
    }
    void show2()
    {
        cout << "Passenger: " << nopb << endl;
    }
};
class goods_train:public train
{
    private:
    int lcpb;
    public:
    void read()
    {
        cout << "Enter Numer of Loading Capacity per Boggy: " << endl;
        cin >> lcpb;
    }
    void show()
    {
        cout << "Loading capcity per Boggy: " << lcpb << endl;
    }
};

int main()
{
    int choice;
    cout << "Enter Your Choice: " << endl;
    cin >> choice;
    if(choice == 1)
    {
        passenger_train s1;
        s1.read1();
        s1.read2();
        s1.show1();
        s1.show2();
    }
    else if (choice == 2)
    {
        goods_train s2;
        s2.read1();
        s2.read();
        s2.show1();
        s2.show();
    }
    else{
        cout << "Invalid Tain " << endl;
    }
   return 0;
}