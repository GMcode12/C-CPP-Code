#include<iostream>
using namespace std;

int count=0;

class dest
{
    int length;
    public:

    dest()
    {   
        count++;
        length=10;
        cout<<"object is created:"<<count<<endl;
    }

    ~dest() //destructure: used to destroy object(when objext goes out if scope&useful for clean up)
    {
        cout<<"object is deleted:"<<count<<endl;
        count--;
    }
};

int main()
{
    dest s1;
    dest s2;

    return 0;
}