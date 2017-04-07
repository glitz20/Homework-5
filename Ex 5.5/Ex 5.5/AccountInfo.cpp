//Submitted by Sabin Sapkota//
//Ex 5.05//
//Account Information//

#include <iostream>
#include "Account.h"//account header//
#include "transaction.h"//transaction header//
using namespace std;

int main()
{
	account account1;//creating object for account class//

	account1.setid(1122);       //setting up id,balance, name and interest rate//
	account1.setbalance(1000);
	account1.setannualInterestrate(1.5);
	account1.setname("George");
	Transaction T1('W',5,account1.getbalance()-5,"Meal");//creating t1 object for transaction class, holds data for withdrawal//
	Transaction T2('D', 30, account1.getbalance() + 30, "Salary");//creating t2 object for transaction class, holds data for deposit//
	account1.withdraw(T1);//object accessing withdraw class//
	
	account1.deposit(T2);//object accessing deposit class//
	
	cout << "For the account of "<<account1.getname() << endl;
	cout << "Your annual interest is "<<account1.getannualInterestrate() << endl;
	cout << "After your transaction your remaining balance is "<< account1.getbalance() << endl;//outputs the final balance//
	

}