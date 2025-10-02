/*
Name:Grace Nthiwa
Reg No:CT100/G/26265/25
Description:Water bill
*/
#include <stdio.h>

int main(){
int units;
float bill;

//prompt the user to enter units
printf("Enter units:");
scanf("%d", &units);

 if(units>0&&units <=30)
 {
bill=units*20;
 }
 else if(units>=31 && units <=60){
	 bill=units*25;
 }
 else if(units>=60){
	 bill=units*30;
 }
 printf("Total water bill is ksh%.2f \n",bill);
 return 0;
}
