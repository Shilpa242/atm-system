#include<iostream>
using namespace std;
void showMenu()
{
	cout<<"* * * * WELCOME TO XYZ BANKING * * * *"<<endl;
	cout<<"*       ****MENU****                 *"<<endl;
	cout<<"*       1. CHECK BALANCE             *"<<endl;
	cout<<"*       2. DEPOSIT MONEY             *"<<endl;
	cout<<"*       3. WITHDRAW MONEY            *"<<endl;
	cout<<"*       4. TRANSFER MONEY            *"<<endl;
	cout<<"*       5. EXIT                      *"<<endl;
	cout<<"* * * * * * * * *  * * * * * * * * * *"<<endl;
}
int main()
{
	int pin , password1 = 1234, password2 = 7890,password3 = 5678, count = 0,option , tns1 = 111, tns2 = 222, tns3 = 333, tnscode ;
	double balance1 = 5000,balance2 = 2000,balance3 = 3000, deposit, withdraw , transfer ;
		
		
	bool is_correct = true;
	do
	{
		cout<<"PLEASE ENTER THE CORRECT PIN : ";
		cin>>pin;
	
		if(pin == password1)
		{
			showMenu();
			do
			{
				cout<<"PLEASE ENTER AN OPTION : ";
				cin>>option;
				switch(option)
				{
					case 1: cout<<"CHECK THE BALANCE OF USER 1 : "<<balance1<<"/-"<<endl;
					  		break;
					case 2: cout<<"DEPOSIT MONEY IN YOUR ACCOUNT : "<<endl;
							cin>>deposit;
							balance1 = balance1 +deposit;
							cout<<"CURRENT BALANCE OF USER 1 IS : "<<balance1<<"/-"<<endl;
					  		break;
					case 3: cout<<"WITHDRAW MONEY FROM YOUR ACCOUNT : "<<endl;
							cin>>withdraw;
							if(withdraw<=balance1)
							{
								balance1 = balance1 - withdraw;
							}
							else
							{
								cout<<"NOT ENOUGH MONEY"<<endl;
							}
							cout<<"CURRENT BALANCE OF USER 1 IS : "<<balance1<<"/-"<<endl;
					  		break;
					case 4: cout<<"TRANSFER MONEY FROM YOUR ACCOUNT  : "<<endl;
							cin>>transfer;
							if(transfer<=balance1)
							{
								cout<<"To which account do you want to transfer your money : "<<endl;
								cin>>tnscode;
								if(tnscode==tns2)
								{
									balance1 = balance1 - transfer;
								balance2 = balance2 + transfer;
								cout<<"CURRENT BALANCE OF USER 1 AFTER THE TRANSFER IS : "<<balance1<<"/-"<<endl;
							cout<<"CURRENT BALANCE OF USER 2 AFTER THE TRANSFER IS : "<<balance2<<"/-"<<endl;
								}
								else if(tnscode == tns3)
								{
									balance1 = balance1 - transfer;
								balance3 = balance3 + transfer;
								cout<<"CURRENT BALANCE OF USER 1 AFTER THE TRANSFER IS : "<<balance1<<"/-"<<endl;
							cout<<"CURRENT BALANCE OF USER 3 AFTER THE TRANSFER IS : "<<balance3<<"/-"<<endl;
								}
							}
							else
							{
								cout<<"NOT ENOUGH MONEY"<<endl;
								cout<<"CURRENT BALANCE OF USER 1 AFTER THE TRANSFER IS : "<<balance1<<"/-"<<endl;
							}
							
					  		break;
					case 5: cout<<"THANKS FOR USING."<<endl;
							cout<<"HAVE A GOOD DAY NAMASKAR."<<endl;
							is_correct=false;
							break;
				}
			}
			while(option !=5);
				
		}
		if(pin == password2)
		{
			showMenu();
			do
			{
				cout<<"PLEASE ENTER AN OPTION : ";
				cin>>option;
				switch(option)
				{
					case 1: cout<<"CHECK THE BALANCE OF USER 2 : "<<balance2<<"/-"<<endl;
					  		break;
					case 2: cout<<"DEPOSIT MONEY IN YOUR ACCOUNT : "<<endl;
							cin>>deposit;
							balance2 = balance2 +deposit;
							cout<<"CURRENT BALANCE OF USER 2 IS : "<<balance2<<"/-"<<endl;
					  		break;
					case 3: cout<<"WITHDRAW MONEY FROM YOUR ACCOUNT : "<<endl;
							cin>>withdraw;
							if(withdraw<=balance2)
							{
								balance2 = balance2 - withdraw;
							}
							else
							{
								cout<<"NOT ENOUGH MONEY"<<endl;
							}
							cout<<"CURRENT BALANCE OF USER 2 IS : "<<balance2<<"/-"<<endl;
					  		break;
					case 4: cout<<"TRANSFER MONEY FROM YOUR ACCOUNT : "<<endl;
							cin>>transfer;
							if(transfer<=balance2)
							{
								cout<<"To which account do you want to transfer your money : "<<endl;
								cin>>tnscode;
								if(tnscode==tns1)
								{
									balance2 = balance2 - transfer;
								balance1 = balance1 + transfer;
								cout<<"CURRENT BALANCE OF USER 2 AFTER THE TRANSFER IS : "<<balance2<<"/-"<<endl;
							cout<<"CURRENT BALANCE OF USER 1 AFTER THE TRANSFER IS : "<<balance1<<"/-"<<endl;
								}
								else if(tnscode == tns3)
								{
									balance2 = balance2 - transfer;
								balance3 = balance3 + transfer;
								cout<<"CURRENT BALANCE OF USER 2 AFTER THE TRANSFER IS : "<<balance2<<"/-"<<endl;
							cout<<"CURRENT BALANCE OF USER 3 AFTER THE TRANSFER IS : "<<balance3<<"/-"<<endl;
								}
							}
							else
							{
								cout<<"NOT ENOUGH MONEY"<<endl;
								cout<<"CURRENT BALANCE OF USER 2  : "<<balance2<<"/-"<<endl;
							}
							
					  		break;
					case 5: cout<<"THANKS FOR USING."<<endl;
							cout<<"HAVE A GOOD DAY NAMASKAR."<<endl;
							is_correct=false;
							break;
				}
			}
			while(option !=5);
				
		}
		if(pin == password3)
		{
			showMenu();
			do
			{
				cout<<"PLEASE ENTER AN OPTION : ";
				cin>>option;
				switch(option)
				{
					case 1: cout<<"CHECK THE BALANCE OF USER 3 : "<<balance3<<"/-"<<endl;
					  		break;
					case 2: cout<<"DEPOSIT MONEY IN YOUR ACCOUNT : "<<endl;
							cin>>deposit;
							balance3 = balance3 +deposit;
							cout<<"CURRENT BALANCE OF USER 3 IS : "<<balance3<<"/-"<<endl;
					  		break;
					case 3: cout<<"WITHDRAW MONEY FROM YOUR ACCOUNT : "<<endl;
							cin>>withdraw;
							if(withdraw<=balance3)
							{
								balance3 = balance3 - withdraw;
							}
							else
							{
								cout<<"NOT ENOUGH MONEY"<<endl;
							}
							cout<<"CURRENT BALANCE OF USER 3 IS : "<<balance3<<"/-"<<endl;
					  		break;
					case 4: cout<<"TRANSFER MONEY FROM YOUR ACCOUNT : "<<endl;
							cin>>transfer;
							if(transfer<=balance3)
							{
								cout<<"To which account do you want to transfer your money : "<<endl;
								cin>>tnscode;
								if(tnscode==tns1)
								{
									balance3 = balance3 - transfer;
								balance1 = balance1 + transfer;
								cout<<"CURRENT BALANCE OF USER 3 AFTER THE TRANSFER IS : "<<balance3<<"/-"<<endl;
							cout<<"CURRENT BALANCE OF USER 3 AFTER THE TRANSFER IS : "<<balance3<<"/-"<<endl;
								}
								else if(tnscode == tns2)
								{
									balance3 = balance3 - transfer;
								balance2 = balance2 + transfer;
								cout<<"CURRENT BALANCE OF USER 3 AFTER THE TRANSFER IS : "<<balance3<<"/-"<<endl;
							cout<<"CURRENT BALANCE OF USER 2 AFTER THE TRANSFER IS : "<<balance2<<"/-"<<endl;
								}
							}
							else
							{
								cout<<"NOT ENOUGH MONEY"<<endl;
								cout<<"CURRENT BALANCE OF USER 3 AFTER THE TRANSFER IS : "<<balance3<<"/-"<<endl;
							}
							
					  		break;
					case 5: cout<<"THANKS FOR USING."<<endl;
							cout<<"HAVE A GOOD DAY NAMASKAR."<<endl;
							is_correct=false;
							break;
				}
			}
			while(option !=5);
				
		}
		else
		{
			count++;
			if(count == 3)
			{
				is_correct = false;
				cout<<"****): SORRY :(****";
			}	
			else
			{
				cout<<"WRONG PASSWORD"<<endl;
				cout<<"TRY AGAIN"<<endl;
			}
		}	
	}
	while(is_correct != false);
	return 0;
}
