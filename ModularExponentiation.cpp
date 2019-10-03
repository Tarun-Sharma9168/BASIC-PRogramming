#include<iostream>
using namespace std;
int modpow(int x,int n,int m)
{
    if(n==0)return 1%m;
    long long int u=modpow(x,n/2,m);
    u=(u*u)%m;
    if(n%2==1)
    u=(u*x)%m;
    return u;
}   
int main()
{
   int x;
   int n;
   int m;
   cin>>x>>n>>m;
   cout<<"The modular exponentiation of given values are  "<<modpow(x,n,m)<<"\n";
   return 0;
}