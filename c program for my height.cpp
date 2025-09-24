//simple c program
/*
name:grace nthiwa
reg:CT100/G/26265/25
description:my height, phone_no, weight
*/
#include<stdio.h>//pre-processor descriptive.scanf

//main function
int main(){
	printf("Hello:\n");
	int height;
	printf("Enter your height:\n");
	scanf("%d", & height);
	printf("Your height is %d \n", height);
	int phone_no;
	printf("Enter your phone_no:\n");
	scanf("%d", & phone_no);
	printf("Your phone_no is %d \n", phone_no);
	int weight;
	printf("Enter your weight");
	scanf("%d", & weight);
	printf("Your weight is %d \n", weight);
	return 0;
}