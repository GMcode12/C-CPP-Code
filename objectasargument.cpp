#include<iostream>
using namespace std;


class salary
{
    int bs,hra;
    public:

    void getdata(int a,int b)
    {
        bs=a;
        hra=b;
    }
    
    void display()
    {
        cout<<"Hra="<<hra<<endl;
        cout<<"Bs="<<bs<<endl;
    }

    void add(salary,salary);  //object as argument
};

//function declaration outside the class (non inline function)
void salary::add(salary s1,salary s2)  
{
    bs=s1.bs+s2.bs;
    hra=s1.hra+s2.hra;
}


int main()
{   
    salary A;
    salary B;
    salary C;
    
    A.getdata(50,20);
    B.getdata(30,40);
    C.add(A,B);             //object as argument 

    A.display();
    B.display();
    C.display();
}