#include<iostream>
using namespace std;
int main()
{
	
	double x1,x2,x3;
	
	cout<<"Enter 3 Numbers to detect the greater from them: "<<endl;
	cin>> x1>> x2>> x3;
	
	double max=x1;
	
	if(max< x2)
		max=x2;
		
	if(max< x3)
		max=x3;	
	
	cout<<"The greater Number = "<<max<<endl;
	
	return 0;
}
