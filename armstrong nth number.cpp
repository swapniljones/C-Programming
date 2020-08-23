#include<iostream>
#include<math.h>
#include<dos.h>
using namespace std;

int main()
{
	while(1)
	{
	int temp,res,num,i,var=0,count=0,c=0;
	cout<<"enter a number upto u want armstrong no:-";
	cin>>num;
	for(i=0;i<=num;i++)
	{
	temp=i;
	while(temp!=0)
	{
		temp=(temp/10);
		++count;
	}

		temp=i;
	while(temp!=0)
		{
			res=(temp%10);
			var=var+pow(res,count);
			temp=(temp/10);
		}
			if(var==i)
			{
			cout<<endl<<"the no is armstrong: "<<i<<endl;
			++c;
			}
//		else
//			cout<<endl<<"not armstrong no"<<endl;
	count=0;
	var=0;
	}
	cout<<endl<<"total armstrng nos are: "<<c<<endl;
	cout<<endl;
	int q;
	cout<<"\nEnter 1 to exit ";
	cin>>q;
	if(q==1)
	{
		return 0;
	}
	}
	return 0;
}


