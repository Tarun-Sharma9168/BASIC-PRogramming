//it is just the program to check the relationship between the gcd and lcm
//of a two numbers the relationship is gcd(a,b)*lcm(a,b)=a*b
//just use it to find any one if three of them is given

#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int gcd;
    int lcm;
    cout<<"enter the value of GCD"<<"\n";

    cin>>gcd;

    cout<<"enter the value of LCM"<<"\n";

    cin>>lcm;

    cout<<"Enter any one number "<<"\n";
    cin>>a;


    b=((lcm*gcd)/a);

    cout<<"the other number is"<<b<<"\n";
    return 0;
}