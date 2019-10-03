#include<iostream>
#include<algorithm>
using namespace std;
bool sum_is_available(int arr[],int size,int n)
{

    sort(arr,arr+size);
    int left_one=0;
    int right_one=size-1;
    while(left_one < right_one)
    {
      if((arr[left_one]+arr[right_one]) == n)
      {
          return true;
      }

      else if((arr[left_one]+arr[right_one]) < n)
      {
          left_one++;
      }
      else{
          right_one--;
      }
    }
    return false;    
}
int main()
{
 int size;
 cin>>size;

 int sum_pair[size];
 for(int i=0;i<size;i++)
 {
     cin>>sum_pair[i];
 }   
 int sum_we_want;
 cin>>sum_we_want;

 if(sum_is_available(sum_pair,size,sum_we_want))
 {
     cout<<"Sum pair is available"<<"\n";
 }
 else
 {
     cout<<"Sum pair is not available"<<"\n";
 }
 return 0;
}