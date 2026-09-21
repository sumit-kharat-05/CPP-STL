#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec={10,20,30,40,50};
    vec.clear();
    for(int val : vec)
    {
        cout<<val<<" ";
    }
    cout<<"Is Empty:-"<<vec.empty()<<endl;
    return 0;
}
