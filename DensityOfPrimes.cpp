//it is calculating the density of primes where the question how many prime numbers between 1 and n if n is the 
//input you can do this using the conjecture or formula given in this program.
#include<bits/stdc++.h>
using namespace std;
int desnity_of_primes(int n)
{
    return (n/log(n));
}
int main()
{
    int n;
    cin>>n;

    cout<<desnity_of_primes(n)<<"\n";
    return 0;
}