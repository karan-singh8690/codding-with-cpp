/* goto label;
________________
___________
_______
label;*/
/*flow chart:- 
start
statement1               lebel 1
statement 2 "skip"        lebel 2
stement 3                 lebel 3*/
#include<iostream>
using namespace std;
int main()
{
    int num;
    for(int num=1; num<=10;  ++num)
    {
        if(num==5)
        {
            //break;
           // cout << "Hello\n";
            //continue;
            goto out;
            
        }
        cout << num << endl;
    }
    cout << "Hello!!!!!!!!";
    out:
    cout << "Hello karan" << endl;
}