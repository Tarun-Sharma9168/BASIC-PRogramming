#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;

if(n>0)
{
if(n<13)
{
cout<<"child"<<"\n";
}
else if(n<=17)
{
cout<<"teen"<<"\n";
}
else{
cout<<"Adult"<<"\n";
}
}
else
{
cout<<"Wrong age group"<<"\n";
}
return 0;
}
 
