#include<stdio.h>
#include<conio.h>

void main(){

float Percentage;
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

	Percentage=((math+science+english+other)/(4*Total)*100);

printf("Percentage is %0.2f\n",Percentage);



if(Percentage>=75){
	printf("Distinction");
	}
else{
	if(Percentage>=60){
		printf("First Class");
	}
	else{
		if(Percentage>=40){
			printf("Second Class");
			}
		else{
			printf("YOU FAILED");
			}

		}
	}



getch();
}