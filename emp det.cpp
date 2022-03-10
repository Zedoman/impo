#include<iostream>
using namespace std;
const int m=50;
class emp
{
	int empid[m];
	float empsal[m];
	int count;
	public:
		void CNT()
		{
			count = 0;
		}
		void getempdet();
		void display();
		void displaysum();
		void remove();
		void displayemp();
};
void emp :: getempdet()
{
	cout<<"Enter emp id :";
	cin>>empid[count];
	cout<<"Enter emp sal :";
	cin>>empsal[count];
	count++;
}
void emp:: displaysum()
{
	float sum =0;
	for(int i=0;i<count;i++)
	{
		sum = sum+empsal[i];
	}
	cout<<"\nTotal Value :"<<sum<<"\n";;
	
}
void emp :: remove()
{
	int a;
	cout<<"Enter item code: ";
	cin>>a;
	for(int i=0;i<count;i++)
	   if(empid[i] == a)
	       empsal[i] = 0;
 } 
 void emp :: displayemp()
 {
 	cout<<"\n Code Price\n";
 	for(int i=0;i<count;i++)
 	{
 		cout<<"\n"<<empid[i];
 		cout<<" "<<empsal[i];
	 }
	 cout<<"\n";
 }
int main()
{
 emp em;
 em.CNT();
 int x;
 do{
 	cout<<"\n you can do the following:";
 	cout<<"Enter Appropriate number \n";
 	cout<<"\n1 : Add an item";
 	cout<<"\n2 : Display Total Value";
 	cout<<"\n3 : Delete an item";
 	cout<<"\n4 : Display all items";
 	cout<<"\n5 : Quit";
 	cout<<"\n\n Choice : ";
 	cin>>x;
 	 switch(x)
 	 {
 		case 1:
 			em.getempdet();
 			break;
 		case 2:
		    em.displaysum();
		    break;
		case 3:
		    em.remove();
			break;
		case 4:
		    em.displayemp();
			break;
		case 5:
		    break;
		default:
		   cout<<"Invalid Output\n"	;
	

		 	
	 }
 	
   }while(x!=5);
	 

}
