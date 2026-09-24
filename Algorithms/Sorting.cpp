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
    // int arr [5] = {8,5,6,4,2};

    // sort (arr,arr+5);

    // for(int val : arr)
    // {
    //     cout<<val<<" ";
    // }

    vector<pair<int ,int>> vec = {{3,1},{2,1},{7,1},{5,2}};

    sort(vec.begin(),vec.end());

    for(auto p : vec)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}