//storing multiple books
#include<iostream>
using namespace std;

class book
{
	int b_no;
	char b_name[10];
	char b_author[10];
	
	public:
	
	void get_data()
	{
		cin>>b_no>>b_name>>b_author;
	}
	
	void display()
	{
		cout<<b_no<<b_name<<b_author;
	}
};

int main()
{
	book b[4];
	
	int i;
	
	for(i=0;i<4;i++)
	{
		b[i].get_data();	
		
	}
	for(i=0;i<4;i++)
	{
		b[i].display();	
		
	}
	
	
}



















































//----------------------------------------------------------------------------------------------------------
//
//class book
//{
//	int b_no[10];
//	char b_name[10][20];
//	char b_author[10][20];
//	int index;
//	
//	public:
//		void setindex()
//		{
//			index=0;
//		}
//		void get_data();
//		void display();
//		
//};
//
//void book::get_data()
//{
//	cout<<"Enter data: 1) Book number  2) Book name 3) Book author "<<endl;
//	cin>>b_no[index];
//	cin>>b_name[index];
//	cin>>b_author[index];
//	index++;
//}
//
//void book::display()
//{	
//	
//	int i;
//	for(i=0;i<index;i++)
//	{
//		cout<<b_no[i]<<"\t"<<b_name[i]<<"\t"<<b_author[i]<<endl;
//	}
//}
//
//int main()
//{
//	
//	book b1;
//	int c,i;
//	
//	cout<<"Enter number of books:(1-10)";
//	cin>>c;
//	b1.setindex();
//	for(i=0;i<c;i++)
//	{
//		b1.get_data();
//	}
//	b1.display();
//	
//	
//	
//}
