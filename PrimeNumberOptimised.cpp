//just prime number checking but the most good optimised approach
/*
This is based on the approach that every prime number greater than 5 can be written in the form of
6*k+or-1 
The algorithm can be improved further by observing that all primes are of the form 6k ± 1,
with the exception of 2 and 3. This is because all integers can be expressed as (6k + i) 
for some integer k and for i = -1, 0, 1, 2, 3, or 4; 2 divides (6k + 0), (6k + 2), (6k + 4);
and 3 divides (6k + 3). So a more efficient method is to test if n is divisible by 2 or 3, 
then to check through all the numbers of form 6k ± 1.
*/
#include<iostream>
using namespace std;
bool primeOrNot(long long int n){
if(n<=1){
    return false;
}
if(n==2 || n==3){
    return true;
}
if(n%2==0 || n%3==0)return false;
for(int i=5;i*i<=n;i+=6){
if(n%i==0 || n%(i+2)==0){
    return false;
}
return true;
}

int main()
{
  long long int n;
   cin>>n;
   bool result=primeOrNot(n);
   if(result){
       cout<<"Number is Prime"<<"\n";
   }

   else{
       cout<<"Number is not Prime"<<"\n";
   }
   return 0;
}