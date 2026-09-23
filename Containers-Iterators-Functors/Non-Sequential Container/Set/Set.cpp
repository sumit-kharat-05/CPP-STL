#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;

int main()
{
    set<int>s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    // s.insert(40);
    s.insert(50);

    cout<<"Lower Bound:-"<<*(s.lower_bound(40))<<endl;
    cout<<"Upper Bound:-"<<*(s.upper_bound(40))<<endl;

    for(int val : s)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}