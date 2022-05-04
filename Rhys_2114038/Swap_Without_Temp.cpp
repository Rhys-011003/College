#include<stdio.h>
#include<conio.h>

void main(){
	float a,b;
	printf("Enter 2 Values\n");
	scanf("%f%f",&a,&b);

	a=a*b;
	b=a/b;
	a=a/b;

	printf("The swapped values are\n""first number is now equal to%f",a);
	printf("\nSecond number is now equal to%f",b);

	getch();


}