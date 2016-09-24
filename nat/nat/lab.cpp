#include<iostream>
using namespace std;
int sum (int a, int b)
{
    int c=a+b;
	return c;
}
void main()
{

	int a=6;
	int b=4,c;
	c=sum(a,b);
	cout<<" ";
	cout<<"sum-"<<c;
    system("pause");
 }