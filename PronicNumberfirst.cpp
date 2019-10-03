//generating the nth rectangular number
//pronic number are the product of the two consecutive numbers
//all three approaches are in the same program just make a comment other two and run all three one by one.
#include<iostream>
using namespace std;
//O(constant)
int main()
{
    int n;
    cin>>n;
   
    int result=n*(n+1);
    cout<<result<<"\n";
    return 0;

}
//checking that the n is pronic or rectangular number or not

//O(sqrt(n))
int main()
{
    bool flag=false;
    for(int i=0;i*i<=n;i++){
        if(i*(i+1)==n){
            flag=true;
            break;
        }
    }

    if(flag){
        cout<<"Pronic Number"<<"\n";
    }
    else{
        cout<<"Not a rectangular or pronic Number"<<"\n"
    }

    return 0;
}
//More better approach which takes only the time log(log(n))
int main()
{
int n;
cin>>n;

int small_result=(int)sqrt(n);

if((small_result *(small_result+1)) ==n){
cout<<"Pronic Number"<<"\n";
}

else{
    cout<<"Not a Pronic Number"<<"\n";
}
}