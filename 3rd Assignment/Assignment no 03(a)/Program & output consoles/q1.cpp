#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
double area(double a,double b,double c);
int main()
{
	double a,b,c;
	cout<<"\t\t Area of a Triangle \n";
	cout<<endl;
	cout<<"Enter the lengths of the sides 'a' = ";
	cin>>a;
	cout<<"Enter the lengths of the sides 'b' = ";
	cin>>b;
	cout<<"Enter the lengths of the sides 'c' = ";
	cin>>c;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Area of Triangle = "<<area(a,b,c)<<" (sq unit)";
	getch();
	return 0;
}
double area(double s1,double s2,double s3)
{
	double s,ans;
	s=(s1+s2+s3)/2.0;
	ans=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	return ans;
}
