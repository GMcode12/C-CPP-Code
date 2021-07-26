#include<iostream>
using namespace std;


int is_palin(int n)
{
	
	int co=0;
	int rem;
	
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		co=co*10+rem;
	}
	
	return co;	
}
int   main()
{	
	int a,b;
	
	cout<<"Enter number:\n";
	cin>>a;
	b=is_palin(a);
	
	if(b==a)
	{
		cout<<"is palindrome";
		
	}
	else
	{
		cout<<"Is not palindrome";
	
	}
	
	
	
}
