#include<iostream>
using namespace std;

void swap(int ,int );
int main()
{
    int a=10;
    int b=20;

    cout<<"Before swapping\n";
    cout<<a<<endl<<b<<endl;
     swap(a ,b);        // call by value:does not affect the original value

     cout<<"After swapping\n";
    cout<<a<<endl<<b<<endl;
}

void swap(int x,int y)  //defination(changes only within the function)
{
    int z;
    z=y;
    y=x;
    x=z;
}