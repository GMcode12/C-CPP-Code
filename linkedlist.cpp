#include<stdio.h>
#include<stdlib.h>



 int main()
 {	
 	int ch,i;	

	
		struct node
		{
			int data;
			struct node *next;
		};
		
		struct node *newnode,*head,*temp;
	
		printf("Enter size of list\n");
		scanf("%d",&ch);
		for(i=0;i<ch;i++)
		{
		
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("Enter data %d\n",i);
			scanf("%d",&newnode->data);
			
			newnode->next=0;
			
			
			head=0;
			
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
	
	
	temp=head;
	
	while(temp!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
		
	}
	
	return 0;
	
 	
 	
 }
