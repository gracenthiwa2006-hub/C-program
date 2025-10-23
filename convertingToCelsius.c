/*
Name:Grace Nthiwa
Reg no:CT100/G/26265/25
Description:converting Fahrenheit to celsius
*/

#include<stdio.h>

//Function to convert Fahrenheit to celsius
float convertToCelsius(float fahrenheit){
	float celsius;
	celsius = (fahrenheit - 32) * 5/9 ;
	return celsius;
}
int main(){
	float f, c;
	
	printf("Enter temperature in Fahrenheit:\n");
	scanf("%f", &f);
	c = convertToCelsius(f);
	
	printf("Temperature in celsius: %.2f\n", c);
	return 0;
}