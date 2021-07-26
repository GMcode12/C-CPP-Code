





void turn()
{
	
	
}
int main()
{   
	
	int choice;
	int count=1;
	int i;
	
	
	
		
	for(i=0;i<9;i++)	
	{
		switch(count)
		{
			case 1:
				
					block();
					count++;
					if(A[0][0] == A[0][1] and A[0][1]==A[0][2] )
					{
						cout<<"!!!!!!!! "<<name1<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
					else if(A[1][0] == A[1][1] and A[1][1]==A[1][2])
					{
						cout<<"!!!!!!!! "<<name1<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
					else if(A[2][0] == A[2][1] and A[2][1]==A[2][2])
					{
						cout<<"!!!!!!!! "<<name1<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
					else if(A[0][0] == A[1][1] and A[1][1]==A[2][2])
					{
						cout<<"!!!!!!!! "<<name1<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
				
					else if(A[2][0] == A[1][1] and A[1][1]==A[0][2])
					{
						cout<<"!!!!!!!! "<<name1<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
						else if(A[0][0]==A[1][0] and A[1][0]==A[2][0])
					{
						cout<<"!!!!!!!! "<<name1<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
					else if(A[0][1]==A[1][1] and A[1][1]==A[2][1])
					{
						cout<<"!!!!!!!! "<<name1<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
					else if(A[0][2]==A[1][2] and A[1][2]==A[2][2])
					{
						cout<<"!!!!!!!! "<<name1<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
					break;
				}
					
			case 2:
				{
				cout<<name2<<" enter your choice:";
				cin>>choice;
						
				switch(choice)
				{
						case 1:
						if(A[0][0]=='X' and 'O')
						{	
							cout<<"All ready filled!!!!!!";
							
						}
						else
						{
							A[0][0]='X';
						}
						break;
					case 2:
					if(A[0][1]=='X' and 'O')
						{
							cout<<"All ready filled!!!!!!";
						}
						else
						{
						
							A[0][1]='X';	
						}
						break;
					case 3:
						if(A[0][2]=='X' and 'O')
						{
							cout<<"All ready filled!!!!!!";						
						}
						else
						{
							A[0][2]='X';
							
						}
						break;
					case 4:
						if(A[1][0]=='X' and 'O')
						{
							cout<<"All ready filled!!!!!!";
						}
						else
						{
							A[1][0]='X';
						}
						break;
					case 5:
						if(A[1][1]!='X' or 'O')
						{
							A[1][1]='X';
						}
						else
						{
							cout<<"All ready filled!!!!!!";
						}
						break;
					case 6:
						if(A[1][2]!='X' or 'O')
						{
							A[1][2]='X';
						}
						else
						{
							cout<<"All ready filled!!!!!!";
						}
						break;
					case 7:
						if(A[2][0]!='X' or 'O')
						{
							A[2][0]='X';
						}
						else
						{
							cout<<"All ready filled!!!!!!";
						}
						break;
					case 8:
						if(A[2][1]!='X' or 'O')
						{
							A[2][1]='X';
						}
						else
						{
							cout<<"All ready filled!!!!!!";
						}
						break;
					case 9:
						if(A[2][2]!='X' or 'O')
						{
							A[2][2]='X';
						}
						else
						{
							cout<<"All ready filled!!!!!!";
						}
						break;
						
					default:
					{
							cout<<"Enter valid choice\n";
					}
					block();
					count--;
					if(A[0][0] == A[0][1] and A[0][1]==A[0][2] )
					{
						cout<<"!!!!!!!! "<<name2<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
					else if(A[1][0] == A[1][1] and A[1][1]==A[1][2])
					{
						cout<<"!!!!!!!! "<<name2<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
					else if(A[2][0] == A[2][1] and A[2][1]==A[2][2])
					{
						cout<<"!!!!!!!! "<<name2<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
					else if(A[0][0] == A[1][1] and A[1][1]==A[2][2])
					{
						cout<<"!!!!!!!! "<<name2<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
				
					else if(A[2][0] == A[1][1] and A[1][1]==A[0][2])
					{
						cout<<"!!!!!!!! "<<name2<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
					else if(A[0][0]==A[1][0] and A[1][0]==A[2][0])
					{
						cout<<"!!!!!!!! "<<name2<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
					else if(A[0][1]==A[1][1] and A[1][1]==A[2][1])
					{
						cout<<"!!!!!!!! "<<name2<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
					else if(A[0][2]==A[1][2] and A[1][2]==A[2][2])
					{
						cout<<"!!!!!!!! "<<name2<<" won the game !!!!!!!!!!!"<<endl;
						exit(1);
					}
					break;
			}
			}
		}	
	}
	
	cout<<"##### GAME OVER ######";
return 0;
}











