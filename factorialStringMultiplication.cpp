//it is the program for the 100 factorial that is using the simple multiplication of school level but as
//we donot have any data structure to store the result so we are using array here just see the program donot 
//become worry.and pls run it.
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
#define SIZE 1000
int multiplication_with_the_array(int i,int *a,int small_size);
void factorial_of_a_largeNumber(int n)
{
   int array_of_factorial[SIZE];
   array_of_factorial[0]=1;
   int small_size=1;
   //we start by sending the 2 for multiplication and then one by one evry number
   for(int i=2;i<=n;i++)
   {
       small_size=multiplication_with_the_array(i,array_of_factorial,small_size);
   }
   for(int i=small_size-1; i >= 0;i--)
   {
       cout<<array_of_factorial[i];
   }
}
int multiplication_with_the_array(int a,int arr[],int size)
{
int carry=0;
for(int i=0;i<size;i++)
{
    int prod=(arr[i]*a)+carry;
    arr[i]= prod % 10;
    carry=prod/10;
}
while(carry)
{
    arr[size]=carry%10;
    carry=carry/10;
    size++;
}
return size;
} 
int main()
{
    int n;
    cin>>n;
    factorial_of_a_largeNumber(n);
    return 0;
}