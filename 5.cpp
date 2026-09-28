#include<iostream>
using namespace std;
int main()
{
	int number;
	
	cout<<"Please Enter a number and the program will detect whether if its Possitive, Negative, or Zero:"<<endl;
	cin>>number;
	
	
	
		if(number>=0)
		{
			cout<<"Possitive."<<endl;
		}
		
		else if(number<=0)
		{
			cout<<"Negative."<<endl;
		}
		
		else if(number==0)
		{
			cout<<"Zero"<<endl;
		}
	
	
	return 0;
}
