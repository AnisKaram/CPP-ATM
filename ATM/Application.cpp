#include <iostream>

/*
* To create an ATM machine we have:
* 1- Check the balance.
* 2- Deposit money. (add to the available balance)
* 3- Withdraw money. (subtract from the available balance)
* 4- Exit
*/

/*
* Declarations
*/
double CheckBalance(double &balance);
double Deposit(double &balance, double &amountToDeposit);
double Withdraw(double &balance, double &amountToWithdraw);

int main()
{
	int _choice;
	double _balance = 1000;
	double _deposit;
	double _withdraw;
	do
	{
		std::cout << "*********ATM MACHINE*********" << std::endl;
		std::cout << "1- Check your Balance" << std::endl;
		std::cout << "2- Deposit Money" << std::endl;
		std::cout << "3- Withdraw Money" << std::endl;
		std::cout << "4- Exit" << std::endl;
		std::cout << "Enter to Continue: ";
		std::cin >> _choice;

		system("cls");

		switch (_choice)
		{
		case 1:
			std::cout << "Your balance is $" << CheckBalance(_balance) << ", Thank you!" << std::endl;
			break;
		case 2:
			std::cout << "Enter the amount to deposit: ";
			std::cin >> _deposit;
			Deposit(_balance, _deposit);
			break;
		case 3:
			std::cout << "Enter the amount to withdraw: ";
			std::cin >> _withdraw;
			Withdraw(_balance, _withdraw);
			break;
		}
	} while (_choice != 4);

	//std::cout << "Memory address for balance is: " << &_balance << std::endl;
	//std::cout << "Memory address for deposit is: " << &_deposit << std::endl;
	//std::cout << "Memory address for withdraw is: " << &_withdraw << std::endl;

	system("pause");
}


/*
* Definitions
*/
double CheckBalance(double& balance)
{
	return balance;
}

double Deposit(double &balance, double &amountToDeposit)
{
	if (amountToDeposit == 0)
		std::cout << "You can't add amount of $" << amountToDeposit << ", Thank you!" << std::endl;
	else if (amountToDeposit > 0)
	{
		balance += amountToDeposit;
		std::cout << "Deposit Successfully added." << std::endl;
		std::cout << "Your Balance is $" << balance << ", Thank you!" << std::endl;
	}
	else
	{
		std::cout << "We can't procceed, try again later." << std::endl;
		std::cout << "Thank you!" << std::endl;
	}
	return balance;
}

double Withdraw(double &balance, double &amountToWithdraw)
{
	if (balance < amountToWithdraw)
		std::cout << "You can't Withdraw an amount less than your Balance!" << std::endl;
	else if (balance == 0)
		std::cout << "Your balance is empty!" << std::endl;
	else
	{
		balance -= amountToWithdraw;
		std::cout << "Withdraw Successful, Your Balance is $" << balance << std::endl;
		std::cout << "Thank you!" << std::endl;
	}
	return balance;
}