#include<iostream>
using namespace std;

class voter
{
    int count;
    static int kount;
    public:

    voter(){
        count=0;
    }

    void vote()
    {
        kount++;
        count++;
    }

    void display(){
        cout<<count;
    }
    static int  total_count()
    {
        return kount;
        // cout<<count; //non static data member can not be accessed
    }



};
int voter::kount;

int main()
{
    voter c[4];
    c[0].vote();
    c[0].vote();
    c[1].vote();
    c[2].vote();
    c[3].vote();

    c[0].display();
   cout<< endl<<voter::total_count()<<endl;

    return 0;
}