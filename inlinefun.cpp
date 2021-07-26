//inline function: The function call get expands by its body
//uses for small functions

#include<iostream>
using namespace std;

inline int  swap(int ,int);

int main()
{
    int a=10;
    int b=20;
    
    cout<<swap(a,b);

}

inline int swap(int x ,int y)
{
    return (x*y);

}

