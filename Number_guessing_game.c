/*
Name:Grace Nthiwa
Reg no:CT100/G/26265/25
Description:Number guessing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int secret_number, guess;
	
	//Initialize random number generator
	srand(time(0));
	
	//Generate a random number between 1 and 20
	secret_number = rand() % 20 + 1;
	
	printf("Welcome to the Number Guessing Game!\n");
	printf("Guess a number between 1 to 20:\n");
	
	//Loop untill the player guesses correctly
	while(1){
		printf("Enter your guess:");
		scanf("%d", &guess);
		
		if(guess > secret_number){
			printf("Too high!\n");
		}
		else if(guess < secret_number){
			printf("Too low!\n");
		}
		else{
			printf("Congratulations! You guessed the number %d!\n", secret_number);
		}
	}

	return 0;
}