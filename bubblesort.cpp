#include<iostream>
using namespace std;

int n=7;
int A[7];


void bubble_sort()
{
    int i,j,flag,temp;
    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if (A[j]<A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                flag++;
            }
        }
        if (flag==0)
        {
            break;
        }
    }
}

int main()
{
    cout<<"Enter Elements for sorting:\n";
    int i;
    for(i=0;i<7;i++)
    {
        cin>>A[i];
    }
    
    bubble_sort();

    cout<< "sorted array is:";
    
    for(i=0;i<7;i++)
    {
        cout<<"\t"<<A[i]<<endl;
    }

    return 0;
}