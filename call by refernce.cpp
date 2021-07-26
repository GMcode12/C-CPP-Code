  #include<iostream>
using namespace std;
void sum(int*,int *);
void change(int &, int &);
int main()
{
	int x=10;
	int y=20;
	
	cout<<"FIRST METHOD:\n";
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	cout<<"After change\n";
	sum(&x,&y);
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	
	cout<<"SECOUND METHOD:\n";
	int a=99;
	int b=100;
	
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"After change\n";
	change(a,b);
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	
	
	
}

void sum(int *ptr1,int *ptr2)
{
	*ptr1=70;
	*ptr2=80;
}
void change(int &a,int &b)
{
	a=35;
	b=76;
	
}










