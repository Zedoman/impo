#include<iostream.h>

class negpos{
	public:
	     int negativepositive(int x){
     		if(x>=0){
		     	cout<<"Num is positive";
		     }
		     else{
     			cout<<"Num is negative";
     		}
     	}
};
int main(){
	int x,s;
	cout<<"enter number:";
	cin>>x;
	negpos obj;
	s=obj.negativepositive(x);
	return 0;
}