//this program assumes that we have to big same numbers and you calculate the average of two numbers 
//using only integer it does job using the simple manipulated formula of avg.you can run and see the result.
//the simple avg or the modified average gives you the different answer.
#include<iostream>
using namespace std;
int average1(int a,int b)
{
   return (a+b)/2;
}
int average2(int a,int b)
{
    return (a/2 + b/2 +(a%2 + b%2)/2);
}
int main()
{
    int a=INT32_MAX;
    int b=INT32_MAX;

    cout<<"Average of these two numbers is  "<<a<<"\n";

    cout<<"Average calculated is   " <<average1(a,b)<<"\n";

    cout<<"Average calculated is   "<<average2(a,b)<<"\n";

    return 0;
}