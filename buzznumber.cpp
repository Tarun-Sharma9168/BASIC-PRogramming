/*
buzz number means that you the number should be divisible by 7 and the last digit is 7
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;

    if(n%7==0 && n%10==7)
    {
        cout<<"It is buzz number"<<"\n";
    }
    else{
        cout<<"It is not a buzz number"<<"\n";
    }
    }
    return 0; 
}
