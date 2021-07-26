#include<iostream>
using namespace std;

inline void swap(int& x,int& y)    //declaration and defination and also inline concept
{
    int z;
    z=y;
    y=x;
    x=z;
}

int main()
{
    int a=10;
    int b=20;

    cout<<a<<endl;
    int &a_name=a;  //reference variable: same name for different variable. change in one    appears in both
    cout<<a_name<<endl;// both will print 10


    cout<<"Before swapping\n";
    cout<<a<<endl<<b<<endl;
    swap(a ,b);        // call by reference: affect the original value(reference variable)
    cout<<"After swapping\n";
    cout<<a<<endl<<b<<endl;
}