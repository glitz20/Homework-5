//Submitted by Sabin Sapkota//
#include "Account.h"
#include <iostream>
#include "transaction.h"
using namespace std;

account::account()//creating default value for account class//
{
	id = 0;
	balance = 0;
	annualInterestRate = 0;
	name = "";
}

account::account(string n, int i, double b, string na)//user can input the value of their choice//
{
	name = n;
	id = i;
	balance = b;
	na = name;
}

string account::getname()
{
	return name;
}

void account::setname(string na)//user can enter desired name//
{
	name = na;
}

int account::getid()
{
	return id;
}

void account::setid(int i)
{
	id = i;
}

double account::getbalance()//user can get balance after transaction//
{
	return balance;
}

void account::setbalance(double b)
{
	balance = b;
}

double account::getannualInterestrate()//returns the annual interest//
{
	return annualInterestRate;
}

void account::setannualInterestrate(double a)
{
	annualInterestRate = a;
}

double account::getMonthlyInterestRate()//returns the monthly interesrt rate//
{
	double MonthlyInterestRate = annualInterestRate / 12;
	return MonthlyInterestRate;
}

void account::withdraw(Transaction t)//subtracts the withdraw amount from the balance//
{
	transactions.push_back(t);
    balance -= t.getamount();
}

void account::deposit(Transaction t)//adds the deposit amount to the balance//
{
	transactions.push_back(t);
	balance += t.getamount();
}

vector<Transaction> account::gettransactions()//returns the detail of transactions//
{
	return transactions;
}

void account::settransactions(vector<Transaction> t)
{
	t = transactions;
}