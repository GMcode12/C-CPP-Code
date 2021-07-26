#include<iostream>
using namespace std;
int main()
{
	int x=80;
	int &r=x;
	cout<<"X "<<x<<endl;
	cout<<"r "<<r<<endl;
	
	r=100;
	cout<<"X "<<x<<endl;
	cout<<"r "<<r<<endl;
	
	return 0;
}
