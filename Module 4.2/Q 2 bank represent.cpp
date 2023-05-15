
// Define a class to represent a bank account.

#include<iostream>
using namespace std;
class bank
{
	  
	char name[10];
	char acc_type[20];
	int account_no;
	float balance;
	
	public :
	//details display
	void assign_value()
	{
		cout<<"enter the name : ";
		cin>>name;
		cout<<"enter types of account : ";
		cin>>acc_type;
		cout<<"enter the account number : ";
		cin>>account_no;
		cout<<"inquiry for balance account : ";
		cin>>balance;
	}
	//deposite the amount
	void deposit_amount()
	{
		int deposit=0;
		cout<<"\nenter deposit amount : ";
		cin>>deposit;
		balance=deposit+balance;
		cout<<"\ndeposited amount : "<<balance;
	}
	//withdraw  payment after check balance
	void withdraw_check_bal()
	{
		int withdraw;
		cout<<"\ndeposited amount : "<<balance;
		cout<<"\nenter the withdraw amount : ";
		cin>>withdraw;
		if(balance>withdraw)
		{
			balance=balance-withdraw;
			cout<<"\nAfter withdraw Balance : "<<balance;
		}
		else
		{
			cout<<"\nnot enough balance : ";
		}
	}
	//balance display
	void name_bal_display()
	{
		cout<<"\nname : "<<name;
		cout<<"\naccount types : "<<acc_type;
		cout<<"\naccount number : "<<account_no;
		cout<<"\ninquiry for balance amount in my account : "<<balance;
		
	}
};
main()
{
	bank b1;
	b1.assign_value();
	b1.deposit_amount();
	b1.withdraw_check_bal();
	b1.name_bal_display();
}
