//just reverse the number the just check if it is similar to the original one
//that is what the palindrome means.
#include<iostream>
using namespace std;
bool is_palindrome(int n)
{ 
   int original_number=n;
   int rev_no=0;
   while(n > 0)
   {
    rev_no=rev_no*10 +n%10;
    n=n/10; 
   }
   if(rev_no == original_number)
   {
       return true;
   }
   else
   {
       {
           return false;
       }
   }
}
int main()
{
    int n;
    cin>>n;
    if(is_palindrome(n)){
        cout<<"Number is palindrome"<<"\n";
    }
    else{
        cout<<"Number is not palindrome"<<"\n";
    }
    return 0;
}