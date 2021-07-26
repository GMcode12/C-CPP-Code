#include<iostream>
#include<string.h>
using namespace std;

class data
{
    char name[20];
    int age;

    public:

    void getdata(char *n,int a)  //string as argument
    {
        strcpy(name,n);
        age=a;
    }

    friend class show;  //friend class
};

class show
{   
    public:
    void display(data a)
    {
        cout<<a.name<<endl<<a.age<<endl;
    }
};
int main()
{
    data mine;
    mine.getdata("ganesh",20);

    show n;
    n.display(mine);

    return 0;
}