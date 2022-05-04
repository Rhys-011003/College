#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c;
printf("Enter 3 Numbers\n");

printf("\nEnter First Number\n");
scanf("%d",&a);

printf("\nEnter Second Number\n");
scanf("%d",&b);

printf("\nEnter Third Number\n");
scanf("%d",&c);
printf("\n");

if(a>b)
{
	if(a>c)
		{
		printf("%d",(a));
		printf(" is the Greatest");
		}
	else{
		printf("%d",(c));
		printf(" is the Greatest");
		}
}
else{
	if(b>c){
		printf("%d",(b));
		printf(" is the Greatest");
		}
	else{
		printf("%d",(c));
		printf(" is the Greatest");
		}
	}

getch();
}

