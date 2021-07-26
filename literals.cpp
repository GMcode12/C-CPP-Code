#include<iostream>

// constat refer to the fix value that the programe may not change its value called as constant
using namespace std;

int main()
{
	#define LENTH 10
	#define WIDTH 20
	#define NEWLINE '\n'
	
	// also another type
	
	const wchar_t NAME=L'ganesh';
	const int MOB= 7038;
	
	cout<<"\nNumber is  "<<MOB<<"\t name is  "<<NAME<<endl;
	
	int area;
	area=LENTH*WIDTH;
	cout<<"\t"<<area<<endl;
	
	
	//Enum return the index value of data and also creat a new variable
	
	enum sub{chemistry,physics, math};
	
	cout<<"\n\n\t\t"<<chemistry;
	cout<<"\n\n\t\t"<<physics;
	cout<<"\n\n\t\t"<<math;
	
	sub m1=chemistry;
	cout<<"\n\n\t\t"<<m1;
	
	
	return 0;
	
	
	
}
