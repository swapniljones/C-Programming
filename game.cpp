#include<iostream>
#include<conio.h>
using namespace std;


class sports
{
protected:

	int score;

public:

	int sportss()
	{
		score=0;
	int a;
	cout<<endl<<"who is Messi: "<<endl;
	cout<<endl<<"1. Footballer	2. Cricketer	3. Baseballer	4. Magician";
	cout<<endl<<"enter ans: ";
	cin>>a;
	if (a==1)
	{
		cout<<"correct";
		score+=10;
	}
	else
		{
			cout<<"wrong";
			cout<<endl<<"score: 0";
			return 0;
		}
	cout<<endl<<"origin of cricket";
	cout<<endl<<endl<<"1.India		2.Srilanka	3.England	4.Usa";
	cout<<endl<<"enter ans: ";
	cin>>a;
	if (a==3)
	{
		cout<<endl<<"correct";
		score+=10;
	}
	else
		{
			cout<<endl<<"wrong";
			score-=10;
			cout<<endl<<"score: "<<score;
			return 0;
		}
	cout<<endl<<"In which sports 22 yard pitch is used";
	cout<<endl<<endl<<"1.Basketball		2.Vollyball		3.Baseball		4.Cricket";
	cout<<endl<<"enter ans: ";
	cin>>a;
	if (a==4)
	{
		cout<<endl<<"correct";
		score+=10;
	}
	else
		{
			cout<<endl<<"wrong";
			score-=10;
			cout<<endl<<"score: "<<score;
			return 0;
		}
		cout<<endl<<"score: "<<score;
		return 0;
	}
	getch();
};


class computer
{
protected:
	
	int score;

public :
	
	int computers()
	{
		score=0;
		int a;
	cout<<"Indian Super Computer"<<endl;
	cout<<"1. PARAM	2. Titan	3. IBM	  4. Pheonix";
	cout<<endl<<"enter ans: ";
	cin>>a;
	if(a==1)
	{
		cout<<"write";
		score+=10;
	}
	else
		{
			cout<<"wrong";
			cout<<endl<<"score: 0";
			return 0;
		}
	cout<<endl<<"Kaspersky is a brand from which country";
	cout<<endl<<"1.India	2.Russia	3.Japan		4.Mexico";
	cout<<endl<<"enter ans: ";
	cin>>a;
	if (a==2)
	{
		cout<<endl<<"U R Correct";
		score+=10;
	}
	else
		{
			cout<<endl<<"U R Incorrect";
			score-=10;
			cout<<endl<<"score: "<<score;
			return 0;
		}
	cout<<endl<<"which among is a feature of OOPs";
	cout<<endl<<"1.Preprocessor		2.JVM		3.Polymorphism		4.Complier";
	cout<<endl<<"enter ans: ";
	cin>>a;
	if (a==3)
	{
		cout<<endl<<"correct";
		score+=10;
	}
	else
		{
			cout<<endl<<"Incorrect";
			score-=10;
			cout<<endl<<"score: "<<score;
			return 0;
		}
	cout<<endl<<"score: "<<score;
	return 0;
	}
	getch();
};


class science
{
protected:
	
	int score;

public:
	
	int sciences()
	{
		score=0;
		int a;
	cout<<endl<<"Einstein was a"<<endl;
	cout<<"1. Scientist	2. Inventor	3. Painter	4. Shopkeeper";
	cout<<endl<<"enter ans: ";
	cin>>a;
	if(a==1)
	{
		cout<<"write";
		score+=10;
	}
	else
		{
			cout<<"sorry";
			cout<<endl<<"score: 0";
			return 0;
		}
	cout<<endl<<"Jagdish Chandra Bose was a Scientist from which Country";
	cout<<endl<<"1.France	2.Japan		3.India		4.Belgium";
	cin>>a;
	if(a==3)
	{
		cout<<endl<<"correct";
		score+=10;
	}
	else
	{
		cout<<endl<<"Incorrect";
		score-=10;
		cout<<endl<<"score: "<<score;
		return 0;
	}
	cout<<endl<<"Primary Element used in Hydrogen Bomb for fusion is";
	cout<<endl<<"1.Hydrogen		2.Uranium	3.Plutonium		4.TNT";
	cin>>a;
	if(a==1)
	{
		cout<<endl<<"correct";
		score+=10;
	}
	else
	{
		cout<<endl<<"Incorrect";
		score-=10;
		cout<<endl<<"score: "<<score;
		return 0;
	}
	cout<<endl<<"score: "<<score;
	return 0;
	}
	getch();
};


class choose : sports,science,computer
{
	public:
		
		void chooses()
		{
		int a,b;
		char name[30];
		cout<<endl<<"enter your name: ";
		gets(name);
		cout<<endl<<"your gender: ";
		cout<<endl<<"1. MALE	2. FEMALE ";
		cout<<endl<<"enter gender: ";
		cin>>a;
		cout<<endl<<"enter ur choice of topic to play: ";
		cout<<endl<<"1. SPORTS  2. COMPUTER  3. SCIENCE";
		cout<<endl<<"enter choice: ";
		cin>>b;
		system("cls");

		{
			cout<<endl<<"name: "<<name;
		}
		{
			if(a==1)
				cout<<"\t"<<"\t"<<"gender: MALE";
			else if(a==2)
				cout<<"\t"<<"\t"<<"gender: FEMALE";
			else
				cout<<endl<<"invalid choice";
		}
		{
			if(b==1)
			{
				cout<<"\t"<<"\t"<<"type: SPORTS"<<endl<<endl;
				sports ss;
				ss.sportss();
			}
				else if(b==2)
			
				{
					cout<<"\t"<<"\t"<<"type: COMPUTER"<<endl<<endl;
					computer cc;
					cc.computers();
				}
				else if(b==3)
				{
					cout<<"\t"<<"\t"<<"type: SCIENCE"<<endl<<endl;
					science sci;
					sci.sciences();
				}
				else
				{
				cout<<endl<<"invalid";
				}
		}
		}
};




int main()

	{
		choose c;
		c.chooses();
		getch();
		return 0;
	}
