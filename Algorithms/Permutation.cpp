#include <iostream>
#include <algorithm>
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
    string s = "abc";
    next_permutation(s.begin(),s.end());
    cout<<s<<endl;
    
    return 0;
}