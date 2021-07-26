#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *ptr;
	int i;
	ptr=(int*)calloc(4,sizeof(int));//when we allocate the memory then it inialize with 0
	
	for (i=0;i<3;i++)
	{
		scanf("%d",&ptr[i]);
	}
	for (i=0;i<3;i++)
	{
		printf("%d\t",ptr[i]);
	}
	printf("\nusing realloc\n");
	
	ptr=(int*)realloc(ptr,5*sizeof(int));
		
	for (i=0;i<5;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	for (i=0;i<5;i++)
	{
		printf("%d\t",ptr[i]);
	}
	
	free(ptr);
	
	printf("\nFree\n");
	for (i=0;i<5;i++)
	{
		printf("%d\t",ptr[i]);
	}
	
	
	return 0;
	
}
