#include<iostream>
using namespace std;

int main()
{
	int num,arm=0,temp,loc;
	cout<<"enter a 3 digit number to check weather armstrong or not:-";
	cin>>num;
	cout<<endl;
	temp=num;
	while(temp>0)
	{
	loc=(temp%10);
	arm=arm+(loc*loc*loc);
	temp=temp/10;
	}
	if(arm==num)
	{
		cout<<"the number is an armstrong number:-"<<num<<endl;
	}
	else
	{
		cout<<"the no is not an armstrong number"<<endl;
	}
	return 0;
}

