#include<iostream>
#include<string>
#include<list>
using namespace std;

struct Youtube
{
    string Name;
    int Scount;

    Youtube(string name, int scount )
    {
        Name=name;
        Scount=scount;
    }
};
ostream& operator << (ostream &COUT,Youtube &obj){
    COUT<<obj.Name<<endl;
    COUT<<obj.Scount<<endl;
    return COUT;
}

struct MyCollection
{
    list<Youtube>Mychannel;

    void operator += (Youtube& obj)
    {
        Mychannel.push_back(obj);
    }
    

};

ostream& operator <<(ostream & COUT,MyCollection& mycollection)
{
    for(Youtube tychannel:mycollection.Mychannel)
    {
        COUT<<tychannel<<endl;
    }
    return COUT;
}


int main()
{
    Youtube yt1("Ganesh",9847);
    Youtube yt2= Youtube("Dinesh",8887);
    MyCollection mychannel;
    mychannel+=yt1;
    mychannel+=yt2;
    cout<<mychannel;
    
    
    return 0;
}
