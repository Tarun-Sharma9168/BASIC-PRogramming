#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comp(int a,int b)
{
   return (abs(a) < abs(b));
}
int main()
{
    vector<int> vi;
    int t;
    while(1){
        cin>>t;
        if(t!=0)
        {
            vi.push_back(t);
        }
        else
        {
            break;
        }   
}
    sort(vi.begin(),vi.end());
    cout<<"\n";
    cout<<"\n";
    for(auto it=vi.begin() ; it!=vi.end();++it)
    {
         cout<<*it<<"\n";
    }
    stable_sort(vi.begin(),vi.end());
    cout<<"\n";
    cout<<"\n";
    for(auto it=vi.begin() ; it!=vi.end();++it)
    {
         cout<<*it<<"\n";
    }
    cout<<"\n";
    cout<<"\n";
    stable_sort(vi.begin(),vi.end(),greater<int>());
     for(auto it=vi.begin() ; it!=vi.end();++it)
    {
         cout<<*it<<"\n";
    }

     for(auto it=vi.begin() ; it!=vi.end();++it)
    {
         cout<<*it<<"\n";
    }
return 0;
}