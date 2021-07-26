#include<iostream>
using namespace std;
int main()
{
	int i,j,n[5],temp;
	cout<<"Enter five numbers"<<endl;
	
	for(i=0;i<5;i++)
	{
		cin>>n[i];
	}
	
	for(i=0;i<4;i++)
	{	for(j=i;j<5;j++)
		{	if(n[i]>n[j])
			{
				temp=n[i];
				n[i]=n[j];
				n[j]=temp;
			}
		}
		
	}
	cout<<"sorted elements are:{";	
	for(i=0;i<5;i++)
	{	if(i==4)
			cout<<n[i];
		else
			cout<<n[i]<<" ,";
	}
	cout<<"}";
	
	
	
	
}
