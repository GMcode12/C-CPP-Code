#include<stdio.h>

typedef struct ganesh
{	

	char name[100];
	float height;
	int age;
}inf;

int main()
{	
inf info;
//p1 info;
	printf("Enter details:\n");
	scanf("%s\n%f\n%d\n",info.name,info.height,info.age);
	
	return 0;
	
}
