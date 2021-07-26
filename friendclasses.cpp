#include<iostream>
using namespace std;

//friend class: friend class  can access the private data member and member function of one another class in which it is declared.

class mine
{
    char name[20];
    int age;

    public:

    void getdata()
    {
        cout<<"enter the name:";
        cin>>name;
        cout<<"Enter the age:";
        cin>>age;
    }

    friend class show;      //friend class declaration
    //Here mine class is friend class of class show hence show class can access the member of class mine but mine cant access the show( it can be done by declaring show class as friend class of mine)
};

class show
{
    public:
    void display(mine a)
    {
        cout<<"Name is: "<<a.name<<endl<<"Age is: "<<a.age<<endl;

        //here we have access on data of mine class
    }

    //friend class mine;
};
int main()
{
    mine g;
    g.getdata();

    show n;
    n.display(g);
    return 0;
}