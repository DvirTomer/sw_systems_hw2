#ifndef _MY_BANK_H_
#define _MY_BANK_H_

#define numcount 50
#define status 2




extern double arrcount[status][numcount];
extern double usedcount;


//1. opens new bank account ONLY if there is less than 50
//2. prints the new bank account id between 901-950
//3. saves the first deposit to the account
int openAccount (double x);

//1. gets bank account id between 901-950
//2. prints the current balance of the account
//3. this action is only available if the bank account status is OPEN
double balanceInquiry (int x);

//1. gets bank account id between 901-950
//2. prints the New balance of the account After the deposit
//3. this action is only available if the bank account status is OPEN
double deposit (int x,double y);

//1. gets bank account id between 901-950
//2. prints the New balance of the account After the withdraw
//3. this action is only available if the bank account status is 
double withrawal (int x,double y);

//1. closes the bank id between 901-950
//2. this action is only available if the bank account status is 
int closeAccount (int x);

//1. this action is only available if the bank account status is 
void interest (double y);

//1. prints all the opened accounts and their current balance
int printAccount ();

//1. closes all the bank accounts and shuts down the program
int closeAllAccont ();

#endif