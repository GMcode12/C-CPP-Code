#include<stdio.h>

int front=-1;
int rear=-1;
int N=5;
int queue[5];


void enqueue(int x)
{
	if(rear==(N-1))
	{
		printf("\nOverflow!!!!!!!!!\n");
	}
	else if(front==-1 &&  rear==-1)
	{
		rear++;front++;
		queue[rear]=x;	
	}
	else
	{
		rear++;
		queue[rear]=x;
	}
}

void dequeue()
{
	if(front==-1 &&  rear==-1)
	{
		printf("\nUnderflow!!!!\n");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front++;
	}
}

void display()
{
	
	int i;
	if(front==-1 && rear==-1)
	{
		printf("\nList is empty!!!!!\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",queue[i]);
			
		}	
	}
	
}

void peek()
{
	if(front==-1)
	{
		printf("/n Queue is empty!!!\n");
	}
	else
	{
		printf("\n%d\n",queue[front]);
	}
}

int main()
{
	
	int m,ch;
	do{
	
	printf("\n1.Insert Data\n2.Delete Data\n3.Display Data\n4.Display front\n5.Exit");
	printf("\n\nEnter your choice:");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		case 1:
			printf("Enter data:");
			scanf("%d",&m);
			enqueue(m);
			break;
		
		case 2:
			dequeue();
			break;
			
		case 3:
			display();
			break;
			
		case 4:
			peek();
			break;
			
		case 5:
			
			printf("\n\nThanks for using queue!!!!!!");
			break;
			
		defualt:
			printf("\nEnter valid choice!!!!!!!");
			break;
			
	}}while(ch!=5);
	return 0;
}
















