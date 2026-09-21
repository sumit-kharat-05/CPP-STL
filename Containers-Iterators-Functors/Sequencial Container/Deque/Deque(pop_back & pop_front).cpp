#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main()
{
    deque <int> d = {100,200,300,400,500};
    d.pop_back();
    d.pop_front();

    for(int val : d)
    {
        cout<<val<<" ";
    }
    return 0;
}