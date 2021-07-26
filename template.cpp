#include<iostream>
using namespace std;


// int getmax(int a ,int b)
// {
//     return a>b? a:b;
// }

// template- way of writing gereric programing
//TEMPLATE FUNCTION

template<typename T> // we can also use class keyword place of typename
T getmax(T a,T b)
{
    return a>b? a:b;
}
int main()
{
    
    
   cout << getmax(3, 7) << endl;  // Call getmax for int
   cout << getmax(3.0, 7.0) << endl; // call getmax for double
   cout << getmax('g', 'e') << endl;   // call getmax for 
    
    return 0;
}