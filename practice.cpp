#include<iostream>

using namespace std;


class box
{
	private:
	
	int legnth;
	int width;
	
	public:
	
	void get_d(int x,int y)
	{
		legnth=x;
		width=y;
	}
	
	void display();
	
};

void box::display()
{
	cout<<"legnth is "<<legnth<< " and width is "<<width <<endl;
	
}
int main()
{
	box m1;
	m1.get_d(100,200);
	m1.display();

























	return 0;
}

