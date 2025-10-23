/*
Name:Grace Nthiwa
Reg no:CT100/G/26265/25
 Description:Calculating fare
 */

#include<stdio.h>

// Function to calculate fare
int calculateFare(int distance){
	int fareRate = 50;
	int totalFare = distance * fareRate;
	return totalFare;
}

// Main function to test calculateFare
int main(){
	int distance;
	printf("Enter distance travelled in km:\n");
	scanf("%d", &distance);
	
	int fare = calculateFare(distance);
	printf("Total fare: Ksh.%d\n", fare);
	return 0;
}