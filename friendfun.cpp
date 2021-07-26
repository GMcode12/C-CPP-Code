#include<iostream>
using namespace std;

class one;
class two
{
    int data;
    public:

    void assign()
    {
        data=5;
    }

    friend int addboth(one,two);    //declaration
};

class one
{
    int data1;
    public:

    void assign()
    {
        data1=10;
    }

    friend int addboth(one ,two);   //declaration
};

/*friend function: can access the private member of class and usually object as paramater*/

int addboth(one a,two b)    //friend funtion defination 
{

    return (a.data1+b.data);
    
    
}

int main()
{
    one o;
    two t;
    o.assign();
    t.assign();
    cout<<"sum is: "<<addboth(o,t)<<endl; //funtion call
}




