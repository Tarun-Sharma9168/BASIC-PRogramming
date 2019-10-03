//set data structure
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin>>q;
    int a,b;
    set<int> s;
    while(q--)
    {
      cin>>a>>b;
      if(a==1)
      {
        s.insert(b);
      } 
      else if(a==2)
      {
         s.erase(b);
      }
      else if(a==3)
      {
          if(s.find(b) != s.end())
          {
              cout<<"YES"<<"\n";
          }
          else{
              cout<<"NO"<<"\n";
          }
      }
      }       
    return 0;
}



