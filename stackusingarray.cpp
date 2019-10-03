#include<iostream>
using namespace std;
int *stack;
int top=-1,size;
void push(int element)
{
    if(top == size)
    {
        cout<<"Overflow\n";
    }
    else
    {
       //stack[++top]=x;
       top=top+1;
       stack[top]=element;
    }
}
void pop()
{
    if(top == -1)
    {
        cout<<"Underflow\n";
    }
    else
    {
        cout<<"\n"<<stack[top]<<"  deleted";
        top=top-1;
    }
}
void top_element()
{
    if(top==-1)
    {
        cout<<"UnderFLow"<<"\n";
    }
    else
    {
        int x=stack[top];
        cout<<x<<"\n";
    }
}
void show()
{
    for(int i=0;i<top;i++)
    {
        cout<<stack[i]<<"\n";
    }
}
int main()
{
    cout<<"Enter the size of the stack\n"<<"\n";
    cin>>size;
    stack=new int[size];
    int choice,x;
    
    do{
        cout<<"\n1.Push";
        cout<<"\n2.Pop";
        cout<<"\n3.Print";
        cout<<"\n4.print top_most_element\n";
        cin>>choice;
        if(choice==1)
        {
            cout<<"\nInsert :\n";
            cin>>x;
            push(x);
        }
        else if(choice == 2)
        {
            pop();
        }

        else if(choice == 3)
        {
            show(); 
        }
        else if(choice ==4)
        {
            top_element();
        }
    }while(choice!=0);

    return 0;
}