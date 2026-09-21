#include <iostream>
#include <vector>
#include <list>
#include <deque>
using namespace std;

int main()
{
    // pair<int, int> p = {5, 5};
    // cout<<p.first<<endl;
    // cout<<p.second<<endl;

    pair<string,pair<int,int>> p = {"Sumit",{05,10}};

    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;
     return 0;
}