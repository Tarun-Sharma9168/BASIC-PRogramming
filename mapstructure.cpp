#include<iostream>
#include<map>
#include<set>
#include<unordered_map>
#include<unordered_set>
using namespace std;
int main()
{
    map<string,int> map_1;
    map_1["johan"]=22;
    map_1["Simon"]=25;

    if(map_1.find("Aron")==map_1.end()){
        cout<<"No record of Aron's Age"<<"\n";
    }

    cout<<"Johan age is"<<map_1["johan"]<<"\n";
    cout<<"Simon age is"<<map_1["Simon"]<<"\n";

    map_1.erase("johan");
    cout<<"Johan age is"<<map_1["johan"]<<"\n";

    auto last=--map_1.end();

    cout<<(*last).first<<"is "<<(*last).second<<"years old"<<"\n";
    return 0;
}