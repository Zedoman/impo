#include<iostream.h>

class oddeve{
	public:
	     int oddeven(int x){
     		if(x%2==0){
		     	cout<<"Num is even";
		     }
		     else{
     			cout<<"Num is odd";
     		}
     	}
};
int main(){
	int x,s;
	cout<<"enter number:";
	cin>>x;
	oddeve obj;
	s=obj.oddeven(x);
	return 0;
}