#include <stdio.h>

#include "myBank.h"


int main()
{
    int c=0;
    double amount;
    int account;
    double intersetRate;
    
    init();
    
    while (c != 'E')
    {
    printf("Please choose a transaction type:\n");
	    printf("O-Open account\n");
	    printf("B-Balanca inquiry\n");
	    printf("D-Deposit\n");
	    printf("W- Withdrawal\n");
	    printf("C-Close account\n");
	    printf("I-Interest\n");
	    printf("P-Print\n");
	    printf("E: Exit\n");
	    
	    
	    
	   c = getchar();
	    while(c == '\n')
        c = getchar();
	    	    
	    switch (c)
	    {
	    case 'O':
	    	printf("Please enter amount for deposit: ");
	    	if (scanf("%lf", &amount)==1){
	    	
		openAccount(amount);}
		else
		printf ("Failed to read the amount\n\n");
		break;
		
	    case 'B':
		printf("Please enter your account number: ");
		if (scanf("%d", &account)==1){
		Balance(account);}
		else
		printf("Failed to read the account number\n\n");
		break;
		
	    case 'D':
	        printf("Please enter your account number: ");
	        if (scanf("%d", &account)==1){
	        newAmount(account);}
	        else
	        printf("Failed to read the account number\n\n");
	        break;
	        
	    case 'W':
	        printf("Please enter your account number: ");
	       if (scanf("%d", &account)==1){
	        pullAmount(account);
	        }
	       
	        else{
	        printf("Failed to read the account number\n\n");}
	        break;
	        
	    case 'C':
	        printf("Please enter your account number: ");
	        if (scanf("%d", &account)==1){
	        closeAccount(account);}
	        else
	        printf("Failed to read the account number\n\n");
	        break;
	        
           case 'I':
	        printf("Please add interest: ");
	        if (scanf("%lf", &intersetRate) ==1){
	        rate(intersetRate); }
	        else printf("Failed to read the interest rate\n\n");
	        break;
	        
	   case 'P':
	        //printf("The open accounts are:\n ---------------\n");
	        printAll();
	        break;
		
	    default: 
	        if (c != 'E'){ 
		printf("Invalid transaction type\n\n");
		break; }
		else 
		break;
	    }
    }
    closeAll();
}


