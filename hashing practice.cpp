#include<iostream>
#include<string>
using namespace std;


void countfre(string h)
{
	char c;
	int i;
	for(c='a';c<='z';c++)
	{
		int frequency=0;
		for (i=0;i<h.length();i++)
		{
			if(h[i]==c)
			{
				frequency++;
			}
			
			
		}
		cout<<"frequency of "<<c <<" "<<frequency<<endl;
		
	}
	
	
	
}




int main()
{
	string h="adfgaadfcv";
	countfre(h);
	
	return 0;
	
	
	
	
	
	
}
