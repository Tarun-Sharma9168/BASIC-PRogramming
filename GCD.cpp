//euclid's algorithm works in O(logn) time
//where n=min(a,b)
//worst case analysis when a and b are consecutive fibonacci numbers
//program for the gcd or hcf of a number using the euclid's algorithm.
//reursive approach but just take some input and let me kow you are getting the right answers or not.
//just run it on your notebook ans debug it. 
#include<iostream>
using namespace std;
int gcd(int a,int b)//works on the base case of b
{
//keep it simple
if(b==0){
    return a;
}
return gcd(b,a%b);
}
int main()
{
  int a;
  int b;

  cin>>a>>b;

  cout<<gcd(a,b)<<"\n"; 
  return 0;   
}