/*
Name:Grace Nthiwa 
Reg No:CT100/G/26265/25
Description :Eligibility for final exams
*/
#include<stdio.h>

int main(){
float attendance, average_marks;

printf("enter attendance");
scanf("%f", & attendance);

printf("enter average_marks");
scanf("%f", & average_marks);

if(attendance >= 75 && average_marks >= 40){
printf("eligible for final exam.\n");
}
else {
printf("not eligible for final exams .\n");
}

return 0;
}