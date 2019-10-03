#include<iostream>
using namespace std;
int main()
{
  int *p=NULL;

  p=new(nothrow) int;
  if(p==NULL){
      cout<<"Memory allocation is not possible"<<"\n";
  }
  else
  {
      *p=29;
      cout<<"you are having the value stored is"<<*p<<"\n";
  }


  int size=10;
  int *q=new(nothrow) int[size];

  if(!q){
      cout<<"Memory allocation failed"<<"\n";
  }    
  else{
      for(int i=0;i<size;i++){
          q[i]=2*i;
      }

      cout<<"Values that are present in the block of memory"<<"\n";
      for(int i=0;i<size;i++){
          cout<<q[i]<<"\n";
      }
  }

  delete p;
  delete[] q;
  return 0;
}