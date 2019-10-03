#include<iostream>
#include<queue>
using namespace std;
void show_queue(queue<int> s)
{
    while(!s.empty())
    {
        cout<<"  "<<s.front();
        s.pop();
    }
}
int main()
{
    int number;
    cin>>number;

    queue<int> s;
    while(number > 0)
    {
       int temp;
       temp=number%10;
       s.push(temp);
       number=number/10;
    }
show_queue(s);    
return 0;
}