#include<iostream>
using namespace std;
void multiple_values(int a,int *x,int *y)
{
   *x=a*a*a;
   
   *y= (*x) * a;
}
int main()
{
int a;
int b;
int c;
a=3;
multiple_values(3,&b,&c);

cout<<b<<" "<<"\n";

cout<<c<<" "<<"\n";
return 0;
}
