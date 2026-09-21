#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    
    stack<int> s2;
    s2.swap(s);

    // cout<<"Top:-"<<s.top()<<endl;

    // while (!s.empty())
    // {
    //     cout << s.top() << " ";
    //     s.pop();
    // }
    cout << "Size Of S:-" << s.size() << endl;
    cout << "Size Of S2:-" << s2.size() << endl;
    cout << endl;
    return 0;
}
