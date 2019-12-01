#ifndef _MY_BANK_H_
#define _MY_BANK_H_

#define numcount 50
#define status 2




extern double arrcount[status][numcount];
extern double usedcount;




int openAccount (double x);
double balanceInquiry (int x);
double deposit (int x,double y);
double withrawal (int x,double y);
int closeAccount (int x);
void interest (double y);
int printAccount ();
int closeAllAccont ();

#endif