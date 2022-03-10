#include<iostream.h>
using namespace std;


class Bank_Account
{
	char NameofDepo[50];
	float Balance;
	int AccountNum;
	char AccountType[50];
	
	public:
	     void initialize(void);
	     void deposit(void);
	     void check(void);
	     void display(void);
};
//=========================================
void Bank_Account :: initialize(void)
{
	cout<<"\nEnter Account Holders Name:";
	gets(NameofDepo);
	cout<<"\nEnter Account Type:";
	gets(AccountType);
	cout<<"\nEnter Account Number:";
	cin>>AccountNum;
	cout<<"\nEnter Balance:";
	cin>>Balance;
}
void Bank_Account :: deposit(void)
{
	int bal;
	cout<<"\nEnter the Amount to Deposit:";
	cin>>bal;
	Balance+=bal;
	cout<<"\nAmount Deposited Successfully\nYour New Balance is:"<<Balance;
}
void Bank_Account :: check(void)
{
	int balance;
	cout<<"\nYour Balance:"<<Balance<<"\nEnter amount to Withdraw:";
	cin>>balance;
	if(balance<=Balance)
	{
		Balance-=balance;
	}
	else{
		exit(0);
	}
}
void Bank_Account :: display(void)
{
	cout<<"\nName:";
	puts(NameofDepo);
	cout<<"\nBalance:"<<Balance;
}
//==================================

int main()
{
	int i;
	Bank_Account ba;
	ba.initialize();
	cout<<"\n1. Your Information\n2. Deposit\n3. Withdraw\nEnter your Choice\n";
	cin>>i;
	if(i==1)
	{
		ba.display();
	}
	else if(i==2)
	{
		ba.deposit();
	}
	else if(i==3)
	{
		ba.check();
	}
	return 0;
}