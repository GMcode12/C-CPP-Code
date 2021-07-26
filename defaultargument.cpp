#include<iostream>
using namespace std;

void show(int a=40,int b=90)    //default argument
{
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
}

int main()
{

    show();      //will take argument default
    show(85,69); //both a and b will change 
    show(23);    //a=23

}