#include<iostream>
using namespace std;
int main()
{
unsigned int n;
cin>>n;
bool flag=false;
if(n % 400 == 0)
{
 flag=true;
}
else if((n % 4) == 0 && (n%100) !=0){
flag=true;
}
else{
flag=false;
}
if(flag)
{
cout<<"leap year"<<"\n";
}
else{
cout<<"not a leap year"<<"\n";
}
return 0;
} 
