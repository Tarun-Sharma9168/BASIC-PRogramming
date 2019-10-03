//mydeque.push_back(1); //Pushes element at the end
//mydeque.push_front(2); //Pushes element at the beginning
//mydeque.pop_back(); //Pops element from the end
//mydeque.pop_front(); //Pops element from the beginning
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    int a,b;
    while(testcases--)
    {
      cin>>a>>b;
      vector<int> v;
      for(int i=0;i<a;i++)
      {
          cin>>v[i];
      }
      int number_of_subarrays=a-(b-1);
      for(int i=0;i<number_of_subarrays;i++)
      { 
          int max=-1e9;  
          for(int j=i;j<b+i;j++)
          {
              if(v[j] > max)
              {
                  max=v[j];
              }
          }
          cout<<max<<" ";
      }
      cout<<"\n";
    } 
    return 0;
}