#include<stdio.h>

int main()
{
	int x=10;
	int *p=&x;
	
	// & reference operator
	// * derefence operator
	printf("%d\n",p);
	printf("%d",*p);
	return 0;
	
	
}
