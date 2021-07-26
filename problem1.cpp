#include<iostream>
using namespace std;

class customer
{
	int c_no;
	char c_name[20];
	int c_bls;
	public:
		void assign()
		{
			cout<<"Enter Customer number:";
			cin>>c_no;
			cout<<"Enter name:\n";
			cin>>c_name;
			cout<<"Enter credit bls\n";
			cin>>c_bls;
		}
		
		void display()
		{
			cout<<"\t\t\t"<<c_no<<"\t\t\t"<<c_name<<"\t\t\t"<<c_bls<<endl;
		}
		
//		void buy(customer a)
//		{	int val;
//			cout<<"Enter credit value:";
//			cin>>val;
//			a.c_bls=a.c_bls+val;
//			
//		}
		
		
};
int main()
{
	int i,num;
	cout<<"Enter number of customer:";
	cin>>num;
	customer b[num];
	
	for(i=0;i<num;i++)
	{
		b[i].assign();
	}
	
	
	cout<<"\t\t\tc_no"<<"\t\t\tc_name"<<"\t\t\tc_bls"<<endl;
	for(i=0;i<num;i++)
	{
		b[i].display();
	}
	
	
	
	
	
	
	
	return 0;
}
