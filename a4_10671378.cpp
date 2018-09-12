#include<iostream>
using namespace std;
int commonFac(int x, int y)
{
	if(x==0)
	{
	return y;
    }
    
    else
    {
	
		return commonFac(y%x,x);
    }

	


}

int main()
{
	int a, b;
	cout<<"Enter a number, A=";
	cin>>a;
	cout<<"Enter another number, B=";
	cin>>b;
	cout<<"GCF="<<commonFac(a,b);
}
