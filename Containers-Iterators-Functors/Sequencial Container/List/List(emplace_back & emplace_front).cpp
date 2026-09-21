#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    l.emplace_back(300);
    l.emplace_back(200);
    l.emplace_back(100);
    l.emplace_front(400);
    l.emplace_front(500);

    for(int val : l)
    {
        cout<<val<<" ";
    }
    return 0;
}