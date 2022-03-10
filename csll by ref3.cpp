#include<iostream.h> 
//we can use through pointer and & operator.//& operator wont work in c as there is no overloading.

void swap(int &a, int &b)
{
	int t;
	t=a;
	a=b;
	b=t;
}
int main()
{
	int a,b,t;
	cout<<"Enter the vlue of a=";
	cin>>a;
	cout<<"Enter the vlue of b=";
	cin>>b;
	swap(a,b);
    cout<<"After swapping the value of a is="<<a<<endl;
	cout<<"After swapping the value of b is="<<b<<endl;
}