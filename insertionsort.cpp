#include<iostream>
using namespace std;

const int n=6;
int A[n]={5,4,10,1,6,2};   //n must be constant

void in_sort()  //insertion sort
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=A[i];
        for(j=i-1;j>=0;j--)
        {
            if(temp<A[j])
            {
                A[j+1]=A[j];
            }
        }
        A[j+1]=temp;
    }


    
    

}
int main()
{
    in_sort();
    int i;

    cout<<"Sorted array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"\t"<<A[i]<<endl;
    }

    return 0;
}