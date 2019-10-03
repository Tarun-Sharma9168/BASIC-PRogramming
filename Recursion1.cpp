//recursion program to get sum upto n numbers
//like sum(5)=1+2+3+4+5
#include<iostream>
using namespace std;
int sum_of_number(int n)//This is simple recursion
{
    if(n==0){
        return 0;
    }
    return n+sum_of_number(n-1);
}
int main()
{
  int n;
  cin>>n;
  cout<<"Sum of Numbers is    "<<sum_of_number(n)<<"\n";    
}