/*
problem set:1
Q1. Write a program that stores 10 numbers in an array and find the max no among those ten.
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arry[10],max_no;
	max_no=arry[0];
	for(int i=0;i<10;i++)
	{
		cout<<"Enter no. "<<i+1<<" = ";
		cin>>arry[i];
		if(arry[i]>max_no)
		max_no=arry[i];
	}
	cout<<endl<<endl;
	cout<<"Greater no. from {";
	for(int n=0;n<10;n++)
	{
		cout<<arry[n];
		if(n!=9)
		cout<<",";
		
	}
	cout<<"} = "<<max_no;
	getch();
	return 0;
	
}
