#include<iostream>
using namespace std;

//object as return type using friend function


class length
{
    int feet;
    int inches;
    public:

    void assign(int x,int y)
    {
            feet=x;
            inches=y;
    }

    void display()
    {
        cout<<"feet: "<<feet<<endl<<"inches: "<<inches<<endl;
    }

    friend length add(length ,length ); //object as argument in friend function
    
};

length add(length m,length n)
{
    length temp;
    temp.feet=m.feet+n.feet;
    temp.inches=m.inches+n.inches;

    return temp;        //object as return type

}


int main()
{
    length x1,x2,x3;
    x1.assign(4,5);
    x2.assign(10,20);
    x3=add(x1,x2);

    x1.display();
    x2.display();
    x3.display();
    
    return 0;
}