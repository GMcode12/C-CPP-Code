#include<iostream>
using namespace std;

typedef struct node
{
    int seatc,seatr;
    string status;
    struct node *next ,*prev;
}node;

node *head[10],*last[10];

class ticket
{
    public:

    ticket()
    {
       
        
        for(int i=1;i<=10;i++)
        {
            head[i]=last[i]=NULL;
            node *temp;
            
            for(int j=1;j<=7;j++)
            {
                temp=create_node(i,j);
                if(head[i]==last[i] && head[i]==NULL)
                {
                    head[i]=last[i]=temp;
                    
                }
                else{
                    //insertion at beginning
                    temp->next=head[i];
                    head[i]->prev=temp;
                    head[i]=temp;
                    head[i]->prev=last[i];
                    last[i]->next=head[i];
                }

            }

        }

    }

    node* create_node(int x,int y);
    void book_ticket();
    void cancle_ticket();
    void display();



};

node* ticket::create_node(int x,int y)
{
    node *temp;
    temp=new (node);
    if(temp==0)
    {
        cout<<"Memory not allocated!!!!!\n";
        return 0;
    }
    else{

        temp->next=temp->prev=NULL;\
        temp->status="A";
        temp->seatr=x;
        temp->seatc=y;
    }
    return temp;
}


void ticket::display()
{
    
    node *temp;
    for(int i=1;i<=10;i++)
    {   
        temp=head[i];
        for(int j=1;j<=7;j++)
        {
            cout<<temp->seatr<<","<<temp->seatc<<temp->status<<"\t\t";
            temp=temp->next;
        }
        cout<<endl;
    }

}

void ticket::book_ticket()
{

    node *temp;
    int r,c;
    cout<<"Enter Row : ";
    cin>>r;
    cout<<"Enter Colomn : ";
    cin>>c;
    temp=head[r];

    for(int i=1;i<=7;i++)
    {
        if(temp->seatc==c)
        {
            if(temp->status=="A")
            {
                temp->status="B";
                cout<<"Your Ticket is booked \nThank you\n";
            }
            else{
                cout<<"\nSORRY !! Already booked!!"<<endl;
            }
        }
        temp=temp->next;
    }
    
  
}

void ticket::cancle_ticket()
{
    node *temp;
    int r,c;
    cout<<"Enter Row : ";
    cin>>r;
    cout<<"Enter Colomn : ";
    cin>>c;
    temp=head[r];
    for(int i=1;i<=7;i++)
    {
        if(temp->seatc==c)
        {
            if(temp->status=="B")
            {
                temp->status="A";
                cout<<"Your Ticket is unbooked \nThank you\n";
            }
            else{
                    cout<<"\nSORRY !! Already unbooked!!"<<endl;
            }
            
        }
        temp=temp->next;
        
    }
   
}


int main()
{

    ticket t;
    t.display();

    int ch;
    do{
        
        cout<<"\n1.Book Ticket \n2.Cancel Booking \n3.EXIT"<<endl;
        cout<<"Enter your choice:";
        cin>>ch;
        switch(ch)
        {
            case 1: 
                    t.book_ticket();
                    t.display();
                    
                    break;
            case 2: 
                    t.cancle_ticket();
                    t.display();  
                    break;
            default:
                cout<<"Enter valid choice!!!"<<endl;
        }

    }while(ch!=3);
  
}