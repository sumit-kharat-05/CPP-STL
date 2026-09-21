#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    list<int> l={100,200,300,400,500};

    for(int val : l)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Front Element:- "<<l.front()<<endl;
    cout<<"Back Element:- "<<l.back()<<endl;
    return 0;
}