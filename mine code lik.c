

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
	
}sn;

sn *newnode,*head,*temp;

void reset_temp()
 {
 	temp=head;
	sn *mine;
	while(temp!=NULL)
	{
		temp=temp->next;
		if(temp!=0)
		{
			mine=temp;
		}
	}
	
	temp=mine;
}

void creat()
{
	int size,i;
	printf("Enter size of array:");
	scanf("%d",&size);
	
	head=0;
	
	for (i=0;i<size;i++)
	{
		newnode=(sn*)malloc(sizeof(sn));
		printf("Enter data element %d:",i+1);
		scanf("%d",&newnode->data);
		newnode->next=0;
		
		if(head==0)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
}

void display()
{
	temp=head;
	while(temp!=0)
	{
		printf("\n%d\t%u",temp->data,temp->next);
		temp=temp->next;
	}
	reset_temp();
}



int main()
{
	creat();
	printf("\nBEfor:\n\n");
	display();
	del_negative();
	printf("\nAfter:\n\n");
	display();
	return 0;
	
	
}
