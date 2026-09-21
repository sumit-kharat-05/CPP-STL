#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);

    for(int val : vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Front Element:-"<<vec.front()<<endl;
    cout<<"Back Element:-"<<vec.back()<<endl;
    return 0;
}