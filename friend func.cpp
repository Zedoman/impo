#include<iostream.h>
#include<conio.h>
//complex num=1+4i like this
class complex{
	int a,b;
	public:
	     void setnumber(int n1, int n2){
     		a=n1;
     		b=n2;
     	}
     	void printnumber(){
	     	cout<<"Your Number is "<<a<<" + "<<b<<endl;
	     }
};
