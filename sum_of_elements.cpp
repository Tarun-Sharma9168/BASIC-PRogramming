//sum of elements in the array
#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;

    int arr[size];
    int element;
    int sum=0;
    for(int i=0;i<size;i++)
    {
        cin>>element;
        arr[i]=element;
        sum+=element;
    }
    cout<<"sum of elements is "<<sum<<"\n";
    return 0;
}