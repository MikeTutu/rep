#include<iostream>
using namespace std;
int main()
{
	float score;
	
	cout<<"Enter exam score=";
	cin>>score;
	
	if(score<=100&&score>=80)
	{
		cout<<"Grade=A"<<endl;
	}
	
	else if(score<=79&&score>=75)
	{
		cout<<"Grade=B+"<<endl;
	}
	
	else if(score<=74&&score>=70)
	{
		cout<<"Grade=B"<<endl;
	}
	
	else if(score<=69&&score>=65)
	{
		cout<<"Grade=C"<<endl;
	}
	
	else if(score<=64&&score>=60)
	{
		cout<<"Grade=D+"<<endl;
	}
	
	else if(score<=59&&score>=55)
	{
		cout<<"Grade=D"<<endl;
	}
	
	else if(score<=54&&score>=50)
	{
		cout<<"Grade=E"<<endl;
	}
	
	else if(score<=49){
		cout<<"Grade=F"<<endl;
	}
	
	
	
	else if(score<0||score>100){
		cout<<"Invalid score entered"<<endl;
	}
	return 0;
}
