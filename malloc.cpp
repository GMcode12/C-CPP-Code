#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int *ptr;
	int i;
	ptr=(int*) malloc(3*sizeof(int));//when we allocate the memory then it inialize with garbage value
	for (i=0;i<3;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for (i=0;i<3;i++)
	{
		printf("%d\t",ptr[i]);
	}
	return 0;
}
