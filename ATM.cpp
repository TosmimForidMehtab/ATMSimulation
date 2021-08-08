#include<iostream>
#include<stdlib.h>
using namespace std;
// Todo-- Add features to transfer money
// Showing Menu
void ShowMenu(){
	cout<<"******MENU********"<<endl;
	cout<<"1. Check Balance"<<endl;
	cout<<"2. Deposit"<<endl;
	cout<<"3. Withdraw"<<endl;
	cout<<"******************"<<endl;
}

int main()
{
	int option,pin,attempts=3;
	char ch='y';
	double balance = 1000, deposit, withdraw;
	do
	{
	cout<<"Enter your PIN: ";
	cin>>pin;
	if(pin==1234)
	{
	
		while(ch=='y'||ch=='Y')
		{
		ShowMenu();
		cout<<"Please select an option: ";
		cin>>option;
		system("cls");
		switch(option)
		{
			case 1: 
				cout<<"Your current balance is: Rs."<<balance<<endl;
				cout<<"Do you want to continue (y/n)";
				cin>>ch;
				break;
			
			case 2: 
				cout<<"Amount to deposit: Rs.";
				cin>>deposit;
				balance+=deposit;
				cout<<"You deposited Rs."<<deposit<<" and your current balance is: Rs."<<balance<<endl;
				cout<<"Do you want to continue (y/n)";
				cin>>ch;
				break;
			
			case 3: 
				cout<<"Amount to withdraw: Rs.";
				cin>>withdraw;
			  	if(withdraw<balance)
			   	{
					balance-=withdraw;
					cout<<"You withdrew Rs."<<withdraw<<" and your current balance is: Rs."<<balance<<endl;
			  	}
			  	else
			  	{
			  		cout<<"Not enough balance to withdraw"<<endl;
			  	}
			  	cout<<"Do you want to continue (y/n)";
				cin>>ch;
			  	break;
			default:
				cout<<"Invalid Option"<<endl;
		}
		}
		cout<<"Please wait while your card is being processed..."<<endl;
		break;
	}
	
	else{
		cout<<"Invalid PIN"<<endl;
		attempts-=1;
	}
	}while(attempts>0);
	if(attempts<=0)
	{
			cout<<"You are blocked"<<endl;
	}
 system("pause");
}

