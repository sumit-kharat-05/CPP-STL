#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(500);
    d.push_back(400);
    d.push_back(300);
    d.push_front(600);
    d.push_front(700);

    for(int val : d)
    {
        cout<<val<<" ";
    }
    return 0;
}