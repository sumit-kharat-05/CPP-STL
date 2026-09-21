#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec={10,20,30,40,50};
    vec.erase(vec.begin()+1);
    for(int val : vec)
    {
        cout<<val<<" ";
    }
    return 0;
}