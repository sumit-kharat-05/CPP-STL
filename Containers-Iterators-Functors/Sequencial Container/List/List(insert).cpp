#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{
    list<int> l = {100, 200, 300, 400, 500};

    l.insert(l.begin(), 600);
    for (int val : l)
    {
        cout<<val<<" ";
    }
    return 0;
}