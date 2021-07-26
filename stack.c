#include<stdio.h>
int stack[100],n;
void push();
void pop();
void display();
void peek();
int top=-1;
void main()
{
	int ch;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	do{
	
		printf("----------------------Opration------------------\n");
		printf("1.Add element\n");
		printf("2.Delete element:\n");
		printf("3.Dislplay elements\n");
		printf("4.Display top element:\n");
		printf("5.Exit\n\n");
		printf("Enter Opration:");
		scanf("%d",&ch);
		
		switch(ch)
		{
			case 1:{
				push();
				break;
			}
			case 2:{
				pop();
				break;
      		}
			case 3:{
				display();
				break;
			}
			case 4:{
				peek();
				break;
			} 
			case 5:{
				printf("Exiting..........\n");
				break;
			}
			default:{
				printf("Enter valid data\n");
				break;
			}
			
	}
	}while(ch!=5);
		
	
	
}


void push()
{
	
	int x;
	if(top==(n-1))
	{
		printf("Overflow! can't insert.\n'");
	}
	else
	{	
		printf("Enter the element:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
		}
}

void pop()
{
	int item;
	if(top==-1)
	
	{
		printf("Underflow!can't delete.\n");
	}
	else
	{	item=stack[top];
		top--;
		printf("Deleted element is %d\n",item);
	}
}

void peek()
{
	if(top==-1)
	{
		printf("Stack is empty!!!!!!\n");
	}
	else
	{
		printf("Top element is %d\n",stack[top]);
	}
}

void display()
{
	if(top==-1)
	{
		printf("Stack s empty!!!\n");
	}
	else
	{
		int i;
		for(i=top;i>=0;i--)
			{
				printf("%d\n",stack[i]);
			}
	
	}
}

























