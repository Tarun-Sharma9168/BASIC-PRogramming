#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   string cowsboys="boo";
   cout<<cowsboys[0]<<"\n";

   cowsboys.push_back('p');

   //using the stringstream class

   stringstream numtostring;

   numtostring << 5;
   string val;

   numtostring >> val;

   stringstream stringtonum;
   stringtonum  << "5";

  int val1;
  stringtonum >> val1;


  stringstream ss;
  ss << "notaninteger";

  int val2;
  if(ss >> val2){
      cout<<"read an integer"<<"\n";
  }
  else{
      cout<<"next word was not an integer"<<"\n";
  }
return 0;
}