//it is the program for the nth fibonacci number by using the general formula that you have 
#include<iostream>
#include<cmath>
using namespace std;
int fibonacci(int n)
{
    double first_step=(1+sqrt(5))/2;
    return round(pow(first_step,n)/sqrt(5));
}
int main()
{
    int n;
    cin>>n;

    cout<<fibonacci(n)<<"\n";
    return 0;
}