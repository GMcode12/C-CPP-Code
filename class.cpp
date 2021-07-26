#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int roll_no;
	char name[1000];
	int id;
	
	public:
		void get()
		{
			cout<<"Enter Data:\n";
			cin>>roll_no>>name>>id;
		}
		void show()
		{
			cout<<roll_no<<endl<<name<<endl<<id<<endl;
		}
};

int main()
{
	
	student ganesh;
	ganesh.get();
	ganesh.show(); 
	
	return 0;
	
	
	
	
}
