#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main()
{
   deque<int> d;

    d.emplace_back(500);
    d.emplace_back(400);
    d.emplace_back(300);
    d.emplace_front(600);
    d.emplace_front(700);

    for(int val : d)
    {
        cout<<val<<" ";
    }
    return 0;
}