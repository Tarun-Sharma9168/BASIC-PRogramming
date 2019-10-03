//Question is can it be optimised 
//Answer is Yes
//when we donot include using namespace std;
//perfect number optimised
#include<iostream>
int main()
{
    int n;//or long long int for very big values
    std::cin>>n;
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }


    if(sum==n){
        std::cout<<"Perect Number"<<"\n";
    }
    else{
        std::cout<<"Not a Perfect Number"<<"\n";
    }
    return 0;
}