/*
Problem set:2
Q2:  Write a program that asks the user to enter an integer. Convert the integer to individual
digits and store them to an array i.e. one digit on one index position and prints that.
And then checks whether that number is a palindrome or not. Palindrome is a number
that is read same from L to R and R to L. For e.g. 2345432 is palindrome so is 123321
where
as 1234567 is not .
*/




#include<iostream>
#include<conio.h>
using namespace std;
int main()
 {
 	int num,d,digit,rev=0;
 	cout<<"Enter any Integer number = ";
 	cin>>num;
 	cout<<"Enter no. of digits in "<<num<<" = ";
 	cin>>d;
 	int loop=d,n=num;
 	int arry[d];
 	while(num>0)
 	{
 		digit=num%10;
 		rev=(rev*10)+digit;
 		arry[d-1]=digit;	
 		num/=10;
 		d--;
	 }
	cout<<"\n\nArray = {";
 	for(int i=0;i<loop;i++)
 	{
 		cout<<arry[i];
 		if(i!=loop-1)
 		{
 			cout<<",";
		}	
	 }
	 cout<<"}";
	 if(n==rev)
	 	cout<<endl<<n<<" is Palindrome";
	 else
	 	cout<<endl<<n<<" is not Palindrome";
 	getch();
 	return   0;
 }
