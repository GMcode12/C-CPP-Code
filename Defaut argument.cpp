//Default argument 
#include<iostream>
using namespace std;

int credited(int money,float factor=1.1)//always place default one at last
{
	return money*factor;
}
int main()
{
	int money;
	float factor;
	money=100000;
	cout<<"Your account balance is "<<money<<",after 1 year balance will be "<<credited(money)<<endl;
	//no need to pass argument of default argument when function is called
	//if we want to change then credied(money,4.6) like this
	
}
