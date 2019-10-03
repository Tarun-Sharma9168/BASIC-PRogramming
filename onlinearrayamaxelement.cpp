//shortening of the real code
#include<iostream>
using namespace std;
int main()
{
   int size;
   cin>>size;

   //int arr[size];//no requirement of the array
   int element;
   int max=-1e9;
   for(int i=0;i<size;i++)
   {
       cin>>element;
       if(element > max)
       {
           max=element;
       }
   }
   cout<<"The maximum element is "<<max<<"\n";
   return 0;    
}