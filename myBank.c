#include <stdlib.h>
#include <stdio.h>
#include "myBank.h"
#define SIZE 50
#define ACC 901

int bankArr[SIZE][2];


void init()
{
    int i, j;
    
    for (i = 0; i < SIZE; i++)
    {
	for (j = 0; j < 2; j++)
	{
	    bankArr[i][j] = 0;
	}
    }
}


void openAccount(double amount)
{
    int i;
    int accountNum;
    if (amount >=0){    
    for (i = 0; i < SIZE; i++)
    {
    	if (bankArr[i][0] == 0) // If accout is available
    	{
	    bankArr[i][0] = 1; // Mark the accout as not-available   
	    bankArr[i][1] = amount;
	    
	   accountNum = (i+ACC); // Calc the new account number
	    
	    printf("New account number is: %d\n\n", accountNum);
	   } return;
	   } 
	    printf("All accounts are open\n"); return;
    	}
    	printf("Invalid amount\n\n");
    }
	
    // printf("Warning: No account is available\n");


double Balance (int account){
   int calc= (account-ACC);
      if (bankArr [calc][0]==1){
         double bc = bankArr [calc][1];
         return printf("The balance of account number %d is: %.2lf\n\n", account, bc);
         }
         return printf("This account is closed\n\n");
           }
           
           void newAmount (int account){
           double amount;
           double bc;
           int ac= (account-ACC);
           if (ac<0 || ac>SIZE){printf("Invalid account number\n\n"); return;}
               if (bankArr [ac][0]==1){
                   printf("Please enter the amount to deposit: ");
	              if (scanf ("%lf", &amount) == 1){
	                    if (amount<0){ printf("Cannot deposit a negative amount\n\n"); return;}
	      
                                 bc= bankArr [ac][1];
                                   bc+=amount; 
                     printf("The new balance is: %.2lf \n", bc);
            }
                  else{ printf("Failed to read the amount\n\n");
                  }
                  
         }         
           else{
           printf("This account is closed\n\n");
           }
           }
           
  
           
   
           
           void pullAmount (int account){
           double amount;
           double bc;
           if (account<ACC || account>=950){printf("Invalid account number\n\n"); return;}
           int ac= (account-ACC);
           if (bankArr [ac][0]==1){
            printf("Please enter how much money do you want to pull from the account:\n");
	    scanf ("%lf", &amount);
	        if (amount <= bankArr[ac][1]){
                  bc= bankArr [ac][1]- amount;
                  bankArr[ac][1]=bc;
                  printf("The new amount is: %.2lf \n\n", bc);}
                  else
                  printf("Cannot withdraw more than the balance\n\n");
     
              }
           else{
           printf("This account is closed\n\n"); }       
           } 
           
          
           
           void closeAccount (int account){
           int ac = (account-ACC);
           if (bankArr[ac][0]==1){
              bankArr[ac][0]=0;
              printf("Closed account number %d\n\n", account);
              }
              else{
              printf("This account is already closed\n\n");
              }
              }
              
              void rate (double intersetRate){
              int i;
              double temp;
              if (intersetRate>0){
                for (i=0; i<SIZE; i++){
                   if (bankArr[i][0]==1){
                         temp = (bankArr[i][1]*(intersetRate/100));
                       bankArr[i][1]+=temp;
                          }
              }
              } printf ("Invalid interest rate\n\n");
              }
              
              
              void printAll(){
              int i;
              double amount;
              for (i=0; i<SIZE; i++){
              if (bankArr[i][0]==1){
              amount= bankArr[i][1];
              
              printf("The account number is: %d\n The deposit is:%.2lf\n\n", i+ACC, amount);
              }
              }
              }
              void closeAll(){
              int i;
              for (i=0; i<SIZE; i++){
              if (bankArr[i][0]==1){
              bankArr[i][0]=0;
              }
              }
              printf("\n\n");
              }
            
              
           
           
        
         
      





