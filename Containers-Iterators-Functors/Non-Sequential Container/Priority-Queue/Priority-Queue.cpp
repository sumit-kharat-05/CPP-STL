#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    // priority_queue<int> q;
    priority_queue<int , vector<int>,greater<int>> q;

    q.push(85);
    q.push(96);
    q.push(23);
    q.push(75);
    q.push(53);

    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<"Size:-"<<q.size()<<endl;
    return 0;
}