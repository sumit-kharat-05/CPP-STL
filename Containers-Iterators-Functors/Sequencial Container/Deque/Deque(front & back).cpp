#include<iostream>
#include<vector>
#include<list>
#include<deque>
using namespace std;

int main()
{
    deque <int> d = {100,200,300,400,500};
    cout<<"Front Element:-"<<d.front()<<endl;
    cout<<"Back Element:-"<<d.back()<<endl;
    return 0;
}