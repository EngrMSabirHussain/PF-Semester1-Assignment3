/*
Problem set:1
Q3:  Write a C++ program to find second largest element in an array.  
*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arry[10],max_1no,max_2no;
	max_1no=arry[0];
	for(int i=0;i<10;i++)
	{
		cout<<"Enter no. "<<i+1<<" = ";
		cin>>arry[i];
		if(arry[i]>max_1no)
		{
			max_2no=max_1no;
			max_1no=arry[i];
		}
		
	}
	cout<<endl<<endl;
	cout<<"Arry element = {";
	for(int n=0;n<10;n++)
	{
		cout<<arry[n];
		if(n!=9)
		cout<<",";
		
	}
	cout<<"}";
	cout<<endl;
	cout<<"1st Greater no. in Arry = "<<max_1no;
	cout<<"\n2nd Greater no. in Arry = "<<max_2no;
	getch();
	return 0;
	
}
