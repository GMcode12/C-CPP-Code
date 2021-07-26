#include<iostream>
#include<string.h>
using namespace std;

// constructer: used to intialize the data mamber of an object . special member function automatically called when object is created.

class manager
{
    int id;
    int age;
    int salary;
    public:

    manager();      //default constructure

    manager(int ,int);    //parameterize constructure

    manager(int,int,int);    //paramaterize constructure (overloading:create two or more constructure )

    manager(manager &); //copy constructure: used to copy one object data to another object
    void display();

};

void manager::display()
{
    cout<<"\n salary:"<<salary<<"\n age:"<<age <<"\n ID:"<<id<<endl;
}

manager::manager()
{
    salary=age=id=0;
}

manager::manager(int a,int b) //constructure defination
{
    salary=a;
    age=b;
    id=1020;

}

manager::manager(int a,int b,int ag)   //defination
{
    id=ag;
    salary=a;
    age=b;

}

manager::manager(manager& a)   //copy constructure
{
    age=a.age;
    salary=a.salary;
    id=a.id;
}

int main()
{
    manager m;  
    manager m1(10,20);              //implicit call:by programmaer
    manager m2(100,200,300);

    manager m3(m2);     //calling of copy constructure

    m.display();
    m1.display();
    m2.display();
    m3.display();
    
    return 0;
}