#ifndef _MY_BANK_
#define _MY_BANK_
#define SIZE 50
#define ACC 901

void init();
void openAccount(double amount);
double Balance (int account);
void newAmount (int account);
void pullAmount (int account);
void closeAccount (int account);
void rate (double intersetRate);
void printAll();
void closeAll();



#endif

