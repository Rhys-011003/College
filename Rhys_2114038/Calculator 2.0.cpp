#include<stdio.h>
#include<conio.h>


void main(){

printf(" Enter 1 for addition,\n Enter 2 for Subtraction,\n Enter 3 for Multiplication,\n Enter 4 for Divsion\n");
int n;
float a;
float b;

scanf("%d",&n);
switch(n){
case 1:
{
printf("Enter First Value to Be Added\n");
scanf("%f",&a);
printf("Enter First Value to Be Added\n");
scanf("%f",&b);
printf("%f is the Sum of a and b\n",(a+b));

}

case 2:
{
printf("Enter First Value to Be Subtracted\n");
scanf("%f",&a);
printf("Enter First Value to Be Subracted\n");
scanf("%f",&b);
printf("%f is the Difference of a and b\n",(a-b));

}
case 3:
{
printf("Enter First Value to Be Multiplied\n");
scanf("%f",&a);
printf("Enter First Value to Be Multiplied\n");
scanf("%f",&b);
printf("%f is the product of a and b\n",(a*b));

}
case 4:
{
printf("Enter First Value to Be Divided\n");
scanf("%f",&a);
printf("Enter First Value to Be Divided\n");
scanf("%f",&b);
printf("%f is the Division of a and b\n",(a/b));

}

}




getch();
}
