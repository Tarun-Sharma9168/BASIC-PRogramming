/*
Happy number is the number whose sum of digit is calculated until the sum is single digit and the
digit is one
*/
#include<iostream>
//using namespace std;
int main()
{
    long long int n;
    std::cin>>n;
    long long int sum=0;
     do{
        sum=0;
        while(n>0)
        {
           sum=sum+n%10;
           n=n/10; 
        }
        n=sum;
    }
    while(sum > 9);
    if(sum==1)
    {
        std::cout<<"Happy Number"<<"\n";
    }
    else
    {
        std::cout<<"Not Happy Number"<<"\n";
    }
return 0;
}