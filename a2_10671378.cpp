#include<iostream>
using namespace std;
int main()
{
	int m,n;
	bool pnum=true;
	
	cout<<"Enter a number:";
	cin>>m;
	
	for(n=2;n<=m/2;n++)
	{
		if(m%n==0){
		
		pnum=false;
		
 }
	}
	if (pnum)
	{
	cout<<"This is a prime number"<<endl;}
	
	else{
	
	cout<<"This is not a prime number"<<endl;}
	return 0;
}
