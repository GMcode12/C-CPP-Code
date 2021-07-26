#include<iostream>
using namespace std;
int main()
{
    int *p1,*p2,n;
    int i;
    cout<<"Enter the size:";
    cin>>n;
    p1=new int[n];      //Dynamically memory allocation at runtime
    p1=p2;
    for(i=0;i<n;i++)
    {
        cin>>*p1;
        p1++;
    }
    
    for(i=0;i<n;i++)
    {
        cout<<*p2<<endl;
        p2++;
    }


    return 0;
}