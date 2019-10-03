#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
void pair_exist(int arr[],int size,int n)
{
    unordered_set<int> sp; 
    for(int i=0;i<size;i++)
    { 
       int temp=n-arr[i];
       if(sp.find(temp) != sp.end())
       {
           cout<<"Pair exist  "<<"("<<arr[i]<<","<<temp<<")"<<"\n";
       }
     sp.insert(arr[i]);  
    }
    cout<<"the number of sum pairs "<<sp.size()<<"\n";
}
int main()
{
 int size;
 cin>>size;

 int arr[size];

 for(int i=0;i<size;i++)
 {
     cin>>arr[i];
 }    
 int sum_u_want;
 cin>>sum_u_want;
pair_exist(arr,size,sum_u_want); 
return 0;
}