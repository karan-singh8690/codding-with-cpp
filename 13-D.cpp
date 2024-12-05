#include<iostream>
using namespace std;
class publication 
{
    private:
    char title[25];
    int price;
    public:
    void read()
    {
        cout << "Enter Book Title: " << endl;
        cin >> title;
        cout << "Enter Book Price: " << endl;
        cin >> price;
    }
    void show()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};
class book
{
    private:
    int pages;
    public:
    void read()
    {
        cout << "Enter Book Pages: " << endl;
        cin >> pages;
    }
    void show()
    {
        cout << "Pages: " << pages << endl;
    }
};
class tape
{
    private:
    int pd;
    public:
    void read()
    {
        cout << "Enter Playing Duration: " << endl;
        cin >> pd;
    }
    void show()
    {
        cout << "Duration: " << pd << endl;
    }
};
int main()
{
    publication s1;
    s1.read();

    book s2;
    s2.read();
    
    tape s3;
    s3.read();
    s1.show();
    s2.show();
    s3.show();
    return 0;
}