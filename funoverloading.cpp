#include<iostream>
using namespace std;

// function overloadind: two or more functions with same name but with different signature

int  volume(int s)
{
    return (s*s*s);
}

double volume(double n)
{
    return ( n*n*n);
}

double volume(double r,int s)
{
    return (3.14*r*s);
}
int main()
{
    cout<<volume(5)<<endl;        //int volume(int )
    cout<<volume(5.25,56)<<endl;  //double/float volume(double,int)
    cout<<volume(5.23);            //double volume(double)

}