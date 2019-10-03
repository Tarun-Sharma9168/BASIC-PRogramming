/*
the question is like this there are t companies and every compANY Has three employees and due to recession 
he has to fire two from the three and it is on the policy that the person having the highest and lowest package 
will be fired and you have to give the answer that who will be safe .
Inputs: t ,the number of companies(may be 1 two or more)
        for each company t ,just three integers denoting the salary of three persons 
Output: give the salary of a person who is safe          
*/


#include<iostream>//header files
#include<algorithm>//as sort() function is in this library only
using namespace std;//library inclusion
int main()
{
    int t;
    cin>>t;
    int element;
    while(t--)
    {
        int arr[3];
        for(int i=0;i<3;i++)
        {
            cin>>element;
            arr[i]=element;
        }
        sort(arr,arr+3);//in_built function works in O(nlogn) time Quick Sort Algorithm of c++
        //standard template library 
      
        cout<<arr[1]<<"\n";
    }
    return 0; 
}