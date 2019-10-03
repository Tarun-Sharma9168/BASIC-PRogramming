//is it the perfect number or not
//perfect number are the number whose sum of divisors is equal to the number and the diviasors is equal to the 
//less than or equal to the n. 
//6=1+2+3
//28=1+2+4+7+14
#include<iostream>
#include<cmath>
using namespace std;
//simple approach
int main()
{
    int n;//long long int for the very big values
    cin>>n;
    int sum=0;
    for(int i=1;i<n;i++)
    {
       if(n%i==0)
       {
           sum+=i;
       }
    }

   if(sum == n)
   {
       cout<<"Perfect Number"<<"\n";
   }
   else
   {
       cout<<"Not a Perfect  Number"<<"\n";
   }

return 0;
}




