#include<iostream>
using namespace std;
int main()
{
unsigned short int age;
cin>>age;
if(age <13)
{
cout<<"child"<<"\n";
}
else if(age>=13 && age<=17)
{
cout<<"TEEN"<<"\n";
}
else
{
cout<<"Adult"<<"\n";
}
return 0;
} 

