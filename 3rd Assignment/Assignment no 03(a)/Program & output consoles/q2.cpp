#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
void daimand_upper(void);
void daimand_lower(void);
int main()
{
	daimand_upper();
	daimand_lower();
	getch();
	return 0;
}
void daimand_upper(void)
{
	int v=1;
	for(int j=1;j<=5;j++)
	{
		for(int k=4;k>=j;k--)
		{
			cout<<" ";
		}
		for(int l=1;l<=v;l++)
		{
			cout<<"*";
		}
		cout<<endl;
		v+=2;
	}
	
}
void daimand_lower(void)
{
	int v=7;
	for(int j=1;j<=4;j++)
	{
		for(int k=1;k<=j;k++)
		{
			cout<<" ";
		}
		for(int l=1;l<=v;l++)
		{
			cout<<"*";
		}
		cout<<endl;
		v-=2;
	}
	
}
