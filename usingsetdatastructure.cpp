#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;

    s.insert(2);
    s.insert(4);
    s.insert(6);
    s.insert(8);


    auto it=s.find(8);

    cout<<*it<<"\n";
    it++;

    cout<<*it<<"\n";

    if(s.find(10)==s.end()){
        cout<<"10 is not in the set"<<"\n";
    }
    else
    {
       cout<<"10 is the element which is in the set"<<"\n";
    }

    s.erase(6);

    cout<<"the size reduced to  "<<s.size()<<"\n";

    
    return 0;
}