#include<iostream>
using namespace std;

int main()
{
	int a=0,b=1,c,d,temp;
	cout<<"enter the no upto u want fibo:-";
	cin>>d;
	cout<<endl<<"the fibo series is:-"<<endl<<a<<'\n'<<b;
	for(c=2;c<d;c++)
	{
		temp=a+b;
		cout<<'\n'<<temp;
		a=b;
		b=temp;
	}
	cout<<endl;	
	return 0;
}