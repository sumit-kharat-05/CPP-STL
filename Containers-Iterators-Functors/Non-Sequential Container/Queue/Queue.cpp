#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(1000);
    q.push(2000);
    q.push(3000);
    q.push(4000);
    q.push(5000);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    cout<<"Size:-"<<q.size()<<endl;
    return 0;
}