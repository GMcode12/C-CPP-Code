#include<iostream>
using namespace std;

typedef struct  node
{
    int data;
    struct node* prev;
    struct node* next;
}node ;

node *head;

void create()
{
     head=0;
    int data,ch;
    node *newnode,*temp;
   do{
    newnode=(node*) malloc(sizeof(node));
    cout<<"Enter the data: ";
    cin>>data;
    newnode->next=0;
    newnode->prev=0;
    newnode->data=data;

    if(head==0)
    {
        head=newnode;
        temp=head;
    }
    else{

        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;

    }

    cout<<"Do you want to continue?(0,1):";
    cin>>ch;
   }while(ch);
}

void display()
{
    node *temp;
    temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}



int main()
{
    int ch;
    do{

        cout<<"\n1)create\n2)Display\n\n";
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                create();
                break;

            case 2:
                display();
                break;

            default:
                exit(0);
        }

    }while(true);

}