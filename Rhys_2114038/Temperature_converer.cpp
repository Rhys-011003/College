#include<stdio.h>
#include<conio.h>

void main()
{
	float temperature_in_c;
	float temperature_in_f;


	printf("Enter Temperature In C\n");
	scanf("%f" , &temperature_in_c);

	printf("The Temperature Is %f", ((temperature_in_c*1.8)+32));
	printf("F");



	getch();
}