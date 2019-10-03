#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
        int testcases;
        cin>>testcases;
        double a,b,c;
        while(testcases--){
 
        cin>>a>>b>>c;         
        // LINE 1 
        cout << hex << left << showbase << nouppercase; // formatting
        cout << (long long) a << endl; // actual printed part

        // LINE 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        cout << b << endl; // actual printed part

        // LINE 3
        cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        cout << c << endl; // actual printed part
        }
        return 0;
}