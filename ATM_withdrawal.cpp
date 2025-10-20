/*
Name:Grace Nthiwa
Reg no:CT100/G/26265/25
Description:ATM Withdrawal
*/

#include<stdio.h>

int main(){
	float balance, withdrawal;
	
	//Prompt the user to ernter initial balance
	printf("Enter your initial account balance:");
	scanf("%f", &balance);
	
	//While balance is greater than 0
	while(balance > 0){
		//Prompt the user to enter withdrawal amount
		printf("Enter amount to withdraw:");
		scanf("%f", &withdrawal);
		
		//Subtract withdrawal from balance
		balance -= withdrawal;
		
		//Display current balance
		printf("Current balance: %.2f\n", balance);
		
		//Check if balance is zero or negative
		if(balance <= 0){
			printf("Your account balance is zero or overdrawn. No more withdrawals allowed.\n");
		} 
	}
	return 0;
} 
