//factorial of a number using recursion
//not a good approach but we are doing as to understand the recusrion
//just see the answer on putting value greater than 20 and something
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0 || n==1){
        return 1;
    }
    else
    {
        {
            return n*factorial(n-1);
        }
    }
}
int main()
{
 int n;
 cin>>n;

 cout<<factorial(n)<<"\n";
 return 0;
}