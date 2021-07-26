#include<iostream>
using namespace std;
class point{
    int arr[2];
    public:
    point(int x=0,int y=0)
    {
        arr[0]=x;
        arr[1]=y;
    }
    void print()
    {
        cout<<"x "<<arr[0]<<" y "<<arr[1]<<endl;
    }

    int& operator [](int pos)
    {
        if(pos==0)
        {
            return arr[0];
        }
        else if(pos==1)
        {
            return arr[1];
        }
        else
        {
            cout<<"out of bound case!!!"<<endl;
            exit(0);
        }
    }
};
int main()
{
   point p1,p2(4,5);
   p1.print();
   p2.print();
   p1[0]=2;
   p1[1]=7;
   p1.print();
    return 0;
}