/*
Problem set:1
Q2.   Read the entries of an array of 10 integers from a user. Compute x as the average of the
10 entries and then compute the average of those entries that are greater than or
equal to x. Print this final average.
*/


#include<iostream>
#include<conio.h>
using namespace std;
float x;
int main()
{
	float arry[10],sum=0;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter no. "<<i+1<<" = ";
		cin>>arry[i];
		sum+=arry[i];
	}
	x=sum/10.0;
	
	cout<<endl<<endl;
	cout<<"Avg. of 10 no. = "<<x;
	cout<<endl;
	float sum1=0,avg,n=0;
	cout<<"Avg of {";
	for(int j=0;j<10;j++)
	{
		if(arry[j]>=x)
		{
			n++;
			cout<<arry[j];
		       cout<<",";
		       sum1+=arry[j];
		       
			
		}	
	}
	cout<<"} = "<<(sum1/n);
	getch();
	return 0;
	
}
