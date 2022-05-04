#include<stdio.h>
#include<conio.h>

void main(){

	int Input;

	printf("Enter Value To Be Checked\n");
	scanf("%d",&Input);

	if(Input%2==0){
	printf("%d",(Input));
	printf(" Is Even");
	}
	else{
	printf("%d",(Input));
	printf(" Is Odd");
	}


	getch();



}