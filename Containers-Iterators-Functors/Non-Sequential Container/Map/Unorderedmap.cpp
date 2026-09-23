#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map
    <string,int> m;

    m.emplace("Tv",100);
    m.emplace("Laptop",110);
    m.emplace("Mobile",130);
    m.emplace("Headphones",140);
    m.emplace("Watch",160);

    for(auto p : m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}