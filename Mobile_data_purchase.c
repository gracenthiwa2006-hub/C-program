/*
Name:Grace Nthiwa
Reg No:CT100/G/26265/25
Description:Mobile data purchase
*/
#include <stdio.h>

int main(){
	int choice;
	printf("Option bundle cost(kes)\n");
	printf("100MB kes50\n.");
	printf("500MB kes200\n.");
	printf("1GB kes350\n.");
	printf("2GB kes600\n.");
	
	printf("Enter choice (1-4):");
	scanf("%d", & choice);
	
	if(choice==1){
		printf("100MB kes50");
	}
	else if(choice==2){
		printf("500MB kes200");
	}
	else if(choice==3){
		printf("1GB kes350");
	}
	else if(choice==4){
		printf("2GB kes600");
	}
	else{
		printf("invalid choice");
	}
	return 0;
}