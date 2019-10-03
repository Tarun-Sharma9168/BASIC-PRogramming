#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    cout<<"Here you given a some primes"<<"\n";
    cout<<"i am saying that there are only four primes"<<"\n";

    cout<<"Means finite set of numbers are there"<<"\n";

    unordered_set<unsigned long long int> set_of_numbers;

    set_of_numbers.insert(2);
    set_of_numbers.insert(3);
    set_of_numbers.insert(5);
    set_of_numbers.insert(7);


    for(auto it=set_of_numbers.begin();it!=set_of_numbers.end();++it)
    {
        cout<<(*it)<<"\n";
    }
    int t;
    cin>>t;
    unsigned long long int sum=1;
    while(t--)
    {
        sum=1;
    for(auto it=set_of_numbers.begin();it!=set_of_numbers.end();++it)
    {
      sum = (sum) * (*it);
    }
    sum=sum+1;
    cout<<sum<<" "<<"\n";
    set_of_numbers.insert(sum);
    }

    for(auto it =set_of_numbers.begin();it!=set_of_numbers.end();++it)
    {   
        cout<<(*it)<<" ";
    }
    cout<<"\n";
    return 0;
}


