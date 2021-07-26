#include<iostream>
#include<stdlib.h>
using namespace std;

char A[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char name1[50],name2[50];
int count=1;


void block()
{	
	cout<<"\n\n\t\tT i c  T a c  T o e \n";
		cout<<"\t\t-------------------\n\n";
		cout<<"\t\t"<<name1<<" = X\n\t\t"<<name2<<" = O\n\n";
		cout<<"\t\t     |     |     \n";
		cout<<"\t\t  "<<A[0][0]<<"  |  "<<A[0][1]<<"  |  "<<A[0][2]<<"  \n";
		cout<<"\t\t_____|_____|_____\n";
		cout<<"\t\t     |     |     \n";
		cout<<"\t\t  "<<A[1][0]<<"  |  "<<A[1][1]<<"  |  "<<A[1][2]<<"  \n";
		cout<<"\t\t_____|_____|_____\n";
		cout<<"\t\t     |     |     \n";
		cout<<"\t\t  "<<A[2][0]<<"  |  "<<A[2][1]<<"  |  "<<A[2][2]<<"  \n";
		cout<<"\t\t     |     |     \n\n\n";
}


void turn()
{	
	int choice;
	if (count==1)
	{	
		cout<<name1<<" enter your choice:";
		cin>>choice;
						
		switch(choice)
		{
				
						
		case 1:
			if(A[0][0]!='X' and 'O')
			{	
				A[0][0]='X';	
					
			}
			else
			{
			
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 2:
			if(A[0][1]!='X' and 'O')
			{
				A[0][1]='X';	
			}
			else
			{
					
			cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 3:
			if(A[0][2]!='X' and 'O')
			{
				A[0][2]='X';						
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
						
			}
			break;
		case 4:
			if(A[1][0]!='X' and 'O')
			{
				A[1][0]='X';
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 5:
			if(A[1][1]!='X' and 'O')
			{
				A[1][1]='X';
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 6:
		
			if(A[1][2]!='X' and 'O')
			{
				A[1][2]='X';
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 7:
			if(A[2][0]!='X' and 'O')
			{
				A[2][0]='X';
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 8:
			if(A[2][1]!='X' and 'O')
			{
				A[2][1]='X';
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 9:
			if(A[2][2]!='X' and 'O')
			{
				A[2][2]='X';
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		default:
			
			cout<<"Please enter valid choice!!!!!\n";
			turn();
		}
		count++;
		
	}


	else if(count==2)
	{	
		cout<<name2<<" enter your choice:";
		cin>>choice;
						
		switch(choice)
		{
				
						
		case 1:
			if(A[0][0]!='X' and 'O')
			{	
				A[0][0]='O';	
					
			}
			else
			{
			
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 2:
			if(A[0][1]!='X' and 'O')
			{
				A[0][1]='O';	
			}
			else
			{
					
				cout<<"All ready filled!!!!!!\n";
				turn();	
			}
			break;
		case 3:
			if(A[0][2]!='X' and 'O')
			{
				A[0][2]='O';						
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 4:
			if(A[1][0]!='X' and 'O')
			{
				A[1][0]='O';
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 5:
			if(A[1][1]!='X' and 'O')
			{
				A[1][1]='O';
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 6:
		
			if(A[1][2]!='X' and 'O')
			{
				A[1][2]='O';
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 7:
			if(A[2][0]!='X' and 'O')
			{
				A[2][0]='O';
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 8:
			if(A[2][1]!='X' and 'O')
			{
				A[2][1]='O';
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		case 9:
			if(A[2][2]!='X' and 'O')
			{
				A[2][2]='O';
			}
			else
			{
				cout<<"All ready filled!!!!!!\n";
				turn();
			}
			break;
		default:
			
			cout<<"Please enter valid choice!!!!!\n";
			turn();
			
		}
		count--;
		
	}
}
int main()
{
	cout<<"\n\t\t**** Welcome to TIC TAC TOE ****\n\n";
	cout<<"Enter first player name: ";
	cin>>name1;
	cout<<"Enter secound player name: ";
	cin>>name2;
	
	while(true)
	{
	
		block();
		turn();
	}
	return 0;
	
}
