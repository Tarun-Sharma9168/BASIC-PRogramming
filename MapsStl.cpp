#include<iostream>
#include<map>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int Q;
    cin>>Q;
    string a;
    int choice,b;
    map<string ,int> mp;
    while(Q--)
    {
       cin>>choice;
       if(choice == 1)
       {
           cin>>a>>b;
           mp[a]+=b;
       }
       else if(choice == 2)
       {
           cin>>a;
           mp.erase(a);
       }
       else
       {
           cin>>a;
           cout<<mp[a]<<"\n";
       }
    }
    return 0;
}