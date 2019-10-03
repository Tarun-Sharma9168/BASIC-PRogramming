//it is a good program to generate the prime factors of any number
//just see the inputs and run the program and see the functioning of the prorams
//prime factors of a number
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[1000]={};
    int n;
    cin>>n;
    int p=0;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0){
            arr[p]=i;
            n=n/i;
            p++;
        }

    }
    if(n>1)
    {
        arr[p]=n;
        p++;
    }
    for(int i=0;i<p;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
return 0;
}
