//header and implementation file for transaction class//

#ifndef transaction_H
#define transaction_H
#include "Date.h"
#include <iostream>
using namespace std;
class Transaction
{
private:
	Date date;
	char type;
	double amount;
	double balance;
	string description;

public:
	Transaction()//constructor with default//
	{
		type = ' ';
		amount = 0;
		balance = 0;
		description = "";

	}
	Transaction(char t, double a, double b, string d)//user can modify the values//
	{
		type = t;
		amount = a;
		balance = b;
		description = d;
	}

	char gettype()//returns the type of transaction//
	{
		return type;
	}

	void settype(char t)
	{
		t = type;
	}

	double getamount()//returns the amount remaining in the account//
	{
		return amount;
	}

	void setamount(double a)
	{
		a = amount;
	}
	double getbalance()//returns the balance in the account//
	{
		return balance;
	}

	void setbalance(double b)
	{
		b = balance;
	}

	string getdescription()//returns the description of the transaction//
	{
		return description;
	}

	void setdescription(string d)
	{
		d = description;
	}

};
#endif

