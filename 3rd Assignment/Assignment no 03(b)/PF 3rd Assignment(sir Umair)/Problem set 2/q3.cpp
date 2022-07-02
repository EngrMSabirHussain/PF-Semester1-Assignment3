/*
Problem set:2
Q3:  Write a C+ program to search an element in an array using user defined function.
*/

#include<iostream>
#include<conio.h>
using namespace std;
int main()
 {
 	int arry[]={2,3,5,7,9,10,15,20,25,27,30,35};
 	int num,loc=-1;
 	cout<<"Enter any number to find = ";
 	cin>>num;
 	for(int i=0;i<12;i++)
 	{
 		if(arry[i]==num)
 	 loc=i;
 		
	 }
 	
 	 if(loc==-1)
 	  cout<<"\nvalue not found in the arry";
 	  else
 	  {
 	  	cout<<"\nvalue found in the arry"<<endl;
 	  	cout<<"At Index "<<loc;
 	  	int index;
 	  	cout<<"\nTo check value enter same index = ";
 	  	cin>>index;
 	  	cout<<arry[index];
		   	  	
	  }
	  
 	  
 	  getch();
 	  return 0;
 }
