/*
Problem set:2
Q1: Write a C++ program to merge two arrays to third array using user defined function. 
*/


#include<iostream>
#include<conio.h>
using namespace std;
void arry_input(int arry[]);
void arry_output(int arry[]);
int main()
 {
    int arry1[5],arry2[5],marge[10];
   cout<<"Enter 5 Elements in 1st Array\n";
   arry_input(arry1);
   cout<<"\nEnter 5 Elements in 2nd Array\n";
   arry_input(arry2); 
   for(int i=0;i<5;i++)
   {
    marge[i]=arry1[i];
    marge[i+5]=arry2[i];
   }
   cout<<"\n\nElements of Array After Merge\n";
   cout<<"Merge Array = {";
   arry_output(marge);
   cout<<"}";
  getch();
  return 0;
 }
 void arry_input(int arry[])
 {
 	for(int i=0;i<5;i++)
   {
   	cout<<"Enter element no. "<<i+1<<" = ";
   cin>>arry[i];
   }
 	
 }
 void arry_output(int arry[])
 {
 	for(int i=0;i<10;i++)
   {
   cout<<arry[i];
   if(i!=9)
      {
   	    cout<<",";
      }
   }
 	
 }
 
