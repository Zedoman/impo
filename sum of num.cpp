#include<iostream.h>
#include<conio.h>
int main()
{
	int s=0,n;
	cout<<"Enter the num:";
	cin>>n;
	while (n>0)
	{
		s=s+n%10;
		n=n/10;
	}
	cout<<"the sum of digit is:"<<s<<"\n";
	return 0;
}
