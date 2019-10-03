#include<iostream>
using namespace std;
int main()
{
    cin.tie(0);
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    int number;
    int remainder,binary=0,var=1;
    while(t--)
    {
        cin>>number;
      do
      {
          remainder =  number%2;
          number = number/2;
          binary=binary + (remainder * var);
          var=var *10;
      }
      while( number > 0 );
      cout<<"the binary number is:";
      cout<<binary;
      cout<<"\n";
    }   
return 0;
}