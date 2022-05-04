#include<stdio.h>
#include<conio.h>


void main(){
	int n,a,in;
	printf("Enter Number To Be Factoralised\n");
	scanf("%d",&n);
	a=n;
	in=n;
	if(n==0){
		printf("\n1 is the factorial of 0\n");
	}else{
	for(n=n;n!=1;n--){
		
		a=a*(n-1);
		
	}
	
	printf("\n%d is the factorial of %d\n",a,in);
	}
getch();
}
