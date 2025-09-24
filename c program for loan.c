#include<stdio.h>

int main(){
	/*Author:Grace Nthiwa
	Course:Bachelor of Science in information technolgy
	Reg no:CT100/G/26265/25 */
	
	int age;
	float income;
	
	printf("Enter your age:");
	scanf("%d", & age);
	
	printf("Enter your annual income:");
	scanf("%f", & income);
	
	if (age >=21 & income >=21000){
		printf("Congratulations, you qualify for a loan.\n");
	}else{
		printf("Unfortunately, we are unable to offer you a loan at this time.\n");
	}
	
	return 0;
}
	

