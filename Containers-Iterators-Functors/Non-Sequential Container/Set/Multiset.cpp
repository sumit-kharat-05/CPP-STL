#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
using namespace std;

int main()
{
    multiset<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);

    s.insert(12);
    s.insert(64);
    s.insert(86);

    for (int val : s)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}