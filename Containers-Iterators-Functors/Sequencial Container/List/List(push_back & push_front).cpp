#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main()
{
    list <int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_front(40);
    l.push_front(50);

    for(int val : l)
    {
        cout<<val<<" ";
    }
    return 0;
}