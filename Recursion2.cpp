//recusrion for the nth fibonacci number 
//just run on a input greater than 50 then observe something
//and let me know
#include<iostream>
using namespace std;
int fibonacci(int n)//nth fibonacci number
{
  if(n<=1){
      return n;
  }
  else
  {
      return (fibonacci(n-1)+fibonacci(n-2));
  }
}
int main()
{
    int n;
    cin>>n;

    cout<<fibonacci(n)<<"  "<<"\n";
    return 0;
}