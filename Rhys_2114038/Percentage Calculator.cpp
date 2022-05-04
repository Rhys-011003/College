#include<stdio.h>
#include<conio.h>

void main()
{
	float math,science,english,other;
	int Total;

	printf("Enter Total Marks Obtainable\n");
	scanf("%d",&Total);
	printf("\n");


	printf("Enter Math Marks\n");
	scanf("%f",&math);
	printf("Enter Science Marks\n");
	scanf("%f",&science);
	printf("Enter English Marks\n");
	scanf("%f",&english);
	printf("Enter Other Marks\n");
	scanf("%f",&other);

	printf("\nyour percentage is %0.2f",((math+science+english+other)/(4*Total)*100 ));
	printf("%%");


	



	getch();
}