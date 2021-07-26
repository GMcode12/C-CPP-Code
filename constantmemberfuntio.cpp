#include<iostream>
using namespace std;

class item{
    int rate;
    public:
    item()
    {
        rate=0;
    }

    void setrate()
    {
        rate=100;
    }

    void changerate() const
    {
        // rate=200;//const function cannot update value it will read only
    }
};
int main()
{
    
    return 0;
}