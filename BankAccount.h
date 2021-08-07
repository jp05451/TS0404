#include<iostream>

class BankAccount {
private:
	int balance;
	static int total;
public:
				BankAccount() :balance(0) {};
				BankAccount(int input) :balance(input) { total += input; };
				void withdraw(int output);
				void save(int input);
				int getBalance();
				static int getAllMoneyInBank();
};
int BankAccount::total = 0;
void BankAccount::withdraw(int output)
{
				balance -= output;
				total -= output;
}
void BankAccount::save(int input)
{
				balance += input;
				total += input;
}
int BankAccount::getBalance()
{
				return balance;
}
int BankAccount::getAllMoneyInBank()
{
				return total;
}

