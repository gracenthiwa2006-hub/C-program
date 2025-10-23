/*
Name:Grace Nthiwa
Reg no:CT100/G/26265/25
Description:Calculate_electric_bill
*/
 
 #include<stdio.h>
 
//Function to calculate the total electricity bill
float calculate_electric_bill(int units){
	float bill = 0;
	
	if(units <= 100){
		bill = units * 10; 
	}
	else if(units <= 200){
		bill = (100 * 10) + (units - 100) * 15;
	}
	else{
		bill = (100 * 10) + (100 * 15) + (units - 200) * 20;
	}
	return bill;
}

int main(){
	int units;
	float totalBill;
	
	printf("Enter the number of units consumed:\n");
	scanf("%d", &units);
	
	totalBill = calculate_electric_bill(units);
	
	printf("Total electricity bill = Ksh.%.2f\n", totalBill);
	
	return 0;
}
 
 