#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;

    s.insert(10);
    s.insert(85);
    s.insert(75);
    s.insert(96);
    s.insert(23);
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