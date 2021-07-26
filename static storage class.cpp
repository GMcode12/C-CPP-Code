#include<iostream>
//static storage class:- it tells the compiler to keep local variable as existing during exicution of program

using namespace std;

static int count =10;   //static globle variable

void fun(void)
{
	static int i=5;
	i++;
	cout<<"i is "<<i;
	cout<<" and count is "<<count<<endl;
	
}


int main()
{
	while(count--)
	{
		fun();
		
	}
	return 0;
}
