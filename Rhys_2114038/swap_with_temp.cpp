#include<stdio.h>
#include<conio.h>

void main(){
	float a,b,temp;
	printf("enter 2 Values\n");
	scanf("%f%f",&a,&b);

	temp=a;
	a=b;
	b=temp;

	printf("The swapped values are\n""first number is now equal to%f",a);
	printf("\nSecond number is now equal to%f",b);

	getch();


}
