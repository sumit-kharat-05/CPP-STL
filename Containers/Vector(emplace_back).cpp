#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> vec;

    vec.emplace_back(10);
    for(int val : vec)
    {
        cout<<val<<" ";
    }
    return 0;
}