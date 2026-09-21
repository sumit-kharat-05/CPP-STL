#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    list<int> l={100,200,300,400,500};

    l.pop_back();
    l.pop_front();

    for(int val : l)
    {
        cout<<val<<" ";
    }
    return 0;
}