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


void insert()
{
	int pos,i;
	
	printf("\n\nEnter the position of element:");
	scanf("%d",&pos);
	
	newnode=(sn*)malloc(sizeof(sn));
	printf("Enter data element:");
	scanf("%d",&newnode->data);
	
	if(pos==1)
	{
		newnode->next=head;
		head=newnode;
	}
	else
	{
		temp=head;
		int count=2;
		while(count<pos)
		{
			temp=temp->next;
			count++;
		}
		if(temp->next==NULL)
		{
			temp->next=newnode;
			temp=newnode;
		}
		else
		{
			newnode->next=temp->next;
			temp->next=newnode;
		}
		
	}
	reset_temp();
}

void del_negative()
{
	sn *p,*prev;
	
	while(head->data<0 && head!=0)
	{
		p=head;
		head=head->next;
		free(p);
	}
	
	temp=head->next;
	prev=head;
	
	do
	{
		if(temp->data<0 && temp!=0)
		{
			p=temp;
			temp=temp->next;
			free(p);
			if(temp!=0)
			{
				prev->next=temp;
			}
			else
			{
				prev->next=0;
			}
		}
		else
		{
			prev=temp;
			temp=temp->next;
		}
	}while(temp!=0);
	reset_temp();
}

 
int main()
{
	creat();
	display();
	insert();
	display();
	return 0;
	
	
}
