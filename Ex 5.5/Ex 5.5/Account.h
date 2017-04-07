//Header file for the Account Class//
#include <iostream>
#include <string>
#include <vector>
#include "transaction.h"//including transaction class//
using namespace std;

#ifndef ACCOUNTCLASS_H
#define ACCOUNTCLASS_H

class account
{
private:
	int id;
	double balance;
	double annualInterestRate;
	string name;

	vector<Transaction> transactions;//creating vector for transaction//

public:
	account();
	account(string, int, double, string);
	string getname();
	void setname(string);
	int getid();
	void setid(int);
	double getbalance();
	void setbalance(double);
	double getannualInterestrate();
	void setannualInterestrate(double);
	double getMonthlyInterestRate();
	void withdraw(Transaction t);
	void deposit(Transaction t);
	vector<Transaction> gettransactions();
	void settransactions(vector<Transaction>);
};
#endif