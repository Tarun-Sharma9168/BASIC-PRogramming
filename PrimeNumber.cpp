//prime number checking program basic
#include<iostream>//  or #include"iostream" also works 
//using namespace std;
int main()
{
   long long int n;//n is the number to be taken
   std::cin>>n;//inputting the value
   bool flag=true;
   for(int i=2;i<n;i++){
       if(n%i==0){
           flag=false;
           std::cout<<"n is not the Prime Number"<<"\n";
           break;
       }
   }    
   if(flag){
       std::cout<<"n is a prime number"<<"\n";
   }
   return 0;
}