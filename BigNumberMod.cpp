//it is just the program to calculate the modulus of a big number which cannot be store in data type of the integer
//so you get your input as a string and using simple logic you can do this.

#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int mod_of_big_number(string n,int a)
{
    int just_maintaining_two_digit=0;
   for(int i=0;i<n.length();i++)
   {
     just_maintaining_two_digit = ( just_maintaining_two_digit * 10 + (int)n[i] -'0' )% a;  
   }
   return just_maintaining_two_digit;
}
int main()   
{
   string s;
   std::cin>>s;
    int number;
   std::cin>>number;
    int result=mod_of_big_number(s,number);
   std::cout<<result<<"\n";
}