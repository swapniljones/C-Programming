#include<iostream>
#include<conio.h>

using namespace std;
	
	int main()
	{
		int a,num,numb[100],temp;
		cout<<"\nenter no of elements to be sorted:-";
		cin>>num;
		cout<<"\n"<<"enter element-\n";
			for(a=0;a<num;a++)
				{
				cout<<"a"<<"["<<a<<"]"<<"-";
				cin>>numb[a];
				cout<<"\n";
				}
			cout<<"\n"<<"the unsorted array is-\n";
			for(a=0;a<num;a++)
			{
				cout<<numb[a];
				cout<<"\t";
			
			}
			cout<<"\n";
				for(int j=1;j<num;j++)
				{
					for(a=0;a<num-j;a++)
					if(numb[a]>numb[a+1])
					{
						temp=numb[a];
						numb[a]=numb[a+1];
						numb[a+1]=temp;
					}
				}
					cout<<"\nthe Sorted array is:-\n";
					for(a=0;a<num;a++)
					{
						cout<<numb[a]<<"\t";
					}
			cout<<endl;
			getch();
				return 0;
	}
