#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> vi;
    int t;
    while(1)
    {
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
    do
    {}
    while(next_permutation(vi.begin(),vi.end()));
    for(auto it=vi.begin() ; it!=vi.end();++it)
    {
         cout<<*it<<"\n";
    }
return 0;   
}