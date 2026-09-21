#include<iostream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
using namespace std;

int main()
{
    map<string,int> m;

    m["Headphone"]=100;
    m["Camera"]=120;
    m["Laptops"]=50;
    m["Fridge"]=80;
    m["Watch"]=75;
    m.emplace("Mobiles",25);
    m.erase("Watch");
    for(auto p : m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }

    //Iterators
    if(m.find("Camera")!=m.end())
    {
        cout<<"Found";
    }
    else
    {
        cout<<"Not Found";
    }
    cout<<endl;
    cout<<"Count:-"<<m.count("Laptops")<<endl;
    return 0;
}
