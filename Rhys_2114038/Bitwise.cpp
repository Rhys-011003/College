#include<stdio.h>
#include<conio.h>


void main(){
	int a,b;
	printf("Enter 2 Values\n\n");
	printf("\nEnter a\n");
	scanf("%d",&a);
	printf("Enter b\n");
	scanf("%d",&b);

	printf("\na&b=%d\n\n",a&b);
	printf("a|b=%d\n\n",a|b);
	printf("b>>1=%d\n\n",b>>1);
	printf("b<<1=%d\n\n",b<<1);
	printf("~a=%d\n",~a);


getch();
}
