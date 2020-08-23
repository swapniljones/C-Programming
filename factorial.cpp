#include<iostream>
using namespace std;
int main()
{
	double number,factorial=1,temp;
	cout<<"\nenter a no of which u want he fatorial:-";
	cin>>number;
	for(temp=1;temp<=number;temp++)
	{
		factorial=factorial*temp;
	}
		cout<<"the factorial of no is="<<factorial<<endl;
		return 0;
}


