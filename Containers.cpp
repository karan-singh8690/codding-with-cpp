/*Seqence                        Associative                                    Derived
  Linear Fashion                 Direct Access                                   Real world Modeling
  1.Vector                       tree like data structure                        eg.Stack, queue, priority-queue
  2.List                          eg.Set, Multiset, Map, MultuMap
  3.Dequeue*/
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v){
    int sum;
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int element, size;
    cout << "Enter the Size you want: " << endl;
    cin >> size;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter the Element = ";
        cin >> element;
        vec1.push_back(element);

    }
    display(vec1);
    return 0;
}