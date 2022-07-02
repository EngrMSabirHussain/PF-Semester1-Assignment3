/*
Problem set:2
Q4:  Write a C+ program to sort array elements in ascending or descending order.
*/

#include<iostream>
#include<conio.h>
using namespace std;
void output(int arry[]);
void dis_sort(int arry[]);
int main()
 {
 	int arry[5];
 	for(int i=0;i<5;i++)
 	{
 		cout<<"Enter Element no."<<i+1<<" = ";
 		cin>>arry[i];
	 }
	 cout<<"Value before sorting\n ";
	 output(arry);
	dis_sort(arry);  
	  
	cout<<"\n\nThe  Descending sorted array\n";
	output(arry);
	getch();
	return 0;	
	 }
	
	 void output(int arry[])
	 {
	 		for(int i=0;i<5;i++)
	 	{
	 		cout<<arry[i];
	 		cout<<" ";
	 	}
	 	
	 }
	 void dis_sort(int arry[])
	 {
	 		int min,temp;
	 		for(int i=0;i<4;i++)
	 		{
	 			min=i;
	 			for(int j=i+1;j<5;j++)
	 			{
	 				if(arry[j]>arry[min])
	 				min=j;
		 		}
		 		if(min!=i)
		 		{
		 			temp=arry[i];
		 			arry[i]=arry[min];
		 			arry[min]=temp;
		 		}
		 	}
	 	
	 }

