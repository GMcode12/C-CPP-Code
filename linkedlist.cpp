#include<iostream>
#include<vector>
using namespace std;


typedef struct node
{
    int data;
    struct node *next;
}node;

node *head,*temp,*newnode;

void rev()
{
    node *prev,*current,*nextnode;
    prev=0;
    current=nextnode=head;
    while(nextnode!=0)
    {
        nextnode=nextnode->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }

    head=prev;
}
void display()
{
    temp=head;
    while (temp!=0)
    {
       cout<<temp ->data<<" ";
       temp=temp->next;
    }
    cout<<endl;
}

void delete_at(int p)
{
    temp=head;
    if(p==1)
    {
        head=temp->next;   
    }
    else{

        for(int i=2;i<p;i++)
        {
            temp=temp->next;
        }
        node *access;
        access=temp->next;
        temp->next=access->next;
        free(access);
    }
}
void insert_at(int p)
{   
    temp=head;
    if(p==1)
    {
        newnode= (node*)malloc(sizeof(node));
        cout<<"Enter data: ";
        cin>>newnode->data;
        newnode->next=temp;
        head=newnode;
    }
    else{
        
        p-=2;
        
        while(p--)
        {
            temp=temp->next;
        }
        newnode= (node*)malloc(sizeof(node));
        cout<<"Enter data: ";
        cin>>newnode->data;
        newnode->next=temp->next;
        temp->next=newnode;

    }
}

int main()
{
    
    int choice;
    head=0;
do{
    newnode= (node*)malloc(sizeof(node));
    cout<<"Enter data: ";
    cin>>newnode->data;
    newnode->next=0;

    if(head==0)
    {
        head=newnode;
        temp=newnode;
    }
    else{

        temp->next=newnode;
        temp=newnode;
    }
    cout<<"Do you want to continue?(1,0)";
    cin>>choice;
}while(choice);
  
  
  int ch,pos,p;
  do{
    
    cout<<"1)insert node\n2)delete node\n3)Display\n4)Reverse\n5)Exite\n"<<endl;
    cin>>ch;
  
    switch(ch)
    {
        case 1:
            cout<<"Enter the position of node:";
            cin>>pos;
            insert_at(pos);
            break;
        case 2:
            cout<<"Enter position of delete: ";
            cin>>p;
            delete_at(p);
            break;

        case 3:
            display();
            break;

        case 4:
             rev();
            break;
        case 5:
            exit(0);
            break;
           
        default:
            cout<<"Invalid choice"<<endl;
            break;
    }
  }while(true);


   
    
}