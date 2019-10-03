//equilibirium index
//O(n^2 solution)
//can you think to make it optimised
#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;

    int *Arr=new int[size];
    int total_sum=0;
    int element;
    for(int i=0;i<size;i++)
    {
        cin>>element;
        Arr[i]=element;
        total_sum+=element;
    }
    int sum=0;
    int left_sum;
    for(int i=1;i<size;i++)
    {
        sum=0;
        for(int j=i+1;j<size;j++)
        {
            sum=sum+Arr[j];
        }
        left_sum=total_sum-sum-Arr[i];

        if(left_sum == sum)
        {
            cout<<"Equilibirium index got found"<<"at "<<i<<"\n";
            break;
        }
    }
    
return 0;
}