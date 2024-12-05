/*call itself
return type func name(perameter)
if(base.condition)
{
code
}
else
{
func name(perameter)
}*/
#include<iostream>
using namespace std;
int fact(int num)
{
    if (num==0)
    {
        return 1;
    }
    else
    {
        return num*fact(num-1);
    }
}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int r = fact(num);
    cout << "Fectorial is " << r;
}