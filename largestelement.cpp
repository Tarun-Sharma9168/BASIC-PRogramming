//largest element in the array
//this is what we call the offline work
//not efficient 
//thats why module does not means make your clumpsy
#include<iostream>
using namespace std;
int largest_element(int arr[],int n)
{ 
    int max=-1e9;
    for(int i=0;i<n;i++)
    {
      if(arr[i] > max)
      {
          max=arr[i];
      }
    }
    return max;
}
int main()
{
    int size;
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int maximum_element=largest_element(arr,size);

    cout<<"the maximum element is "<<maximum_element<<"\n";
return 0;
}