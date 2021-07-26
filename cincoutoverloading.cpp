#include<iostream>
using namespace std;
class mine
{
    int x;
    public:
    mine(int x=0):x{x} {}
    void print()
    {
        cout<<x<<endl;
    }
    friend istream& operator >>(istream& input,mine& obj);
    friend ostream& operator <<(ostream& output,mine& obj);
};

istream& operator >>(istream& input,mine& obj)
{
    input>>obj.x;
    return input;
}

ostream& operator <<(ostream& output,mine& obj)
{
    output<<obj.x;
    return output;

}
int main()
{
    mine m1;
    m1.print();
    cin>>m1;
    cout<<m1<<endl;
    m1.print();
    return 0;
}