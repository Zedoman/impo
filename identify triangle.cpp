#include<iostream.h>
#include<conio.h>
int main()
{
	int a,b,c;
	cout<<"Enter three numbers:\n";
	cin>>a>>b>>c;
	if (a==b && b==c)
	{
		cout<<"Equilatral triangle\n";
	}
	else if(a==b || b==c || c==a)
	{
		cout<<"Isosceles triangle\n";
	}
	else
	{
		cout<<"Scalene triangle\n";
	}
	return 0;
}