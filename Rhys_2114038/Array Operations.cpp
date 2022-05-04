#include<stdio.h>



bool end=false;
int n;
const int sizeR=3;//Amount Of Rows
const int sizeC=3;//Amount Of Columns
const int sizeR1 = 3;//Amount Of Rows
const int sizeC1 = 3;//Amount Of Columns
const int sizeR2 = 3;//Amount Of Rows
const int sizeC2 = 3;//Amount Of Columns

int i,j,k;


int Matrix[sizeR][sizeC];  //Start The Array
int MatSum[sizeR][sizeC];
int A[sizeR1][sizeC1];
int B[sizeR2][sizeC2];
int CP[sizeR1][sizeC2];


void StartMatrix(int mat[sizeR][sizeC]) {

	
	for(i=0;i<sizeR;i++){
		for(j=0;j<sizeC;j++){
		printf("\n\nEnter Value of Row %d and Column %d\n",i+1,j+1);
		scanf("%d",&mat[i][j]);
		}}
	printf("\n\n");
	
}

void PrintMatrix(int mat[sizeR][sizeC]) {
	
	
	for(i=0;i<sizeR;i++){
		for(j=0;j<sizeC;j++){
		printf("%d\t",mat[i][j]);
		}
		printf("\n\n");
	}
	
}

void Large(int mat[sizeR][sizeC]) {
	int g = 0;
	for (i = 0; i < sizeR; i++) {
		for (j = 0; j < sizeC; j++) {
			if (mat[i][j] > g) {
				g = mat[i][j];
			}
		}
	}
	printf("%d is The Greatest\n", g);
}

void Search(int Mat[sizeR][sizeC]) {
	int value;
	printf("Enter value to be found\n");
	scanf("%d",&value);
	for(i=0;i<sizeR;i++){
		for(j=0;j<sizeC;j++){
			if(Mat[i][j]==value)
				printf("%d is present at Row %d and Column %d\n",value,i+1,j+1);
				
		}
	
	}
	
}

void Insert(){
	int Row,Column;
	printf("Enter Location to insert value");
	scanf("%d %d",&Row,&Column);
}

void Delete() {
	printf("Deleteingosh\n");
}

void AddMat(int MA[sizeR][sizeC], int MB[sizeR2][sizeC], int MS[sizeR][sizeC]) {
	
	for (i = 0; i < sizeR; i++) {
		for (j = 0; j < sizeC; j++) {
			MS[i][j] = MA[i][j] + MB[i][j];
		}
	}
}

void CrossProduct(int MA[sizeR1][sizeC1], int MB[sizeR2][sizeC2], int MS[sizeR1][sizeC2]) {
	if (sizeC1 == sizeR2) {
		for (i = 0; i < sizeR1; i++) {
			for (j = 0; j < sizeC2; j++){
				MS[i][j] = 0;
				for (k = 0; k < sizeC1; k++)
				{
					MS[i][j] = (MA[i][k] * MB[k][j])+MS[i][j];
				}
				
			}
		}


	}
	else
	{
		printf("Cannot Multiply Matricies|Incorrect Input");
	}

}

void DotProduct() {
	printf("IDK \n\n");
}





void main(){
	printf("%d Rows And %d Columns\n\n",sizeR,sizeC);


	
	

	while(end==false)
	{
		

		printf("Enter 1 to find the largest number\nEnter 2 to perform insertion,search or deletion\nEnter 3 to perform Simple Math\nEnter 4 to exit\n");
		scanf("%d",&n);

		
		
		

		switch(n){
			case 1:{
				printf("Case 1\n");
				StartMatrix(Matrix);
				
				Large(Matrix);
				PrintMatrix(Matrix);
				
					
					
				break;
					}//largest number code
			case 2:{
				int n2;
				printf("Case 2\n");
				printf("Enter 1 for Search\nEnter 2 for insertion\nEnter 3 for Deletion\n");
				scanf("%d",&n2);
				switch(n2){
				case 1:{

					   StartMatrix(Matrix);
					   PrintMatrix(Matrix);
					   Search(Matrix);
					   
					   break;
					   }
				case 2:{
					   Insert();
					   break;
					   }
				case 3:{
					Delete();
						}
				}
					//Insertion search nd delete
				break;
					}
			case 3:{
				int n3;
				printf("Simple Math\n");
				printf("Enter 1 for Addition\nEnter 2 for Multiplication\n");
				scanf("%d", &n3);
				switch (n3)
				{
				case 1: {
					StartMatrix(A);
					PrintMatrix(A);
					StartMatrix(B);
					PrintMatrix(A);
					printf("\n");
					PrintMatrix(B);
					printf("\n\n");


					AddMat(A, B, MatSum);//first and second entries are the matrices to be added,Third is the matrix to be assigned to

					PrintMatrix(MatSum);
					break;
				}
				case 2: {
					int n3_2;
					printf("Simple Math\n");
					printf("Enter 1 for Cross Product\nEnter 2 for Dot Product\n");
					scanf("%d", &n3_2);
					switch (n3_2)
					{
					case 1:{
						StartMatrix(A);
						PrintMatrix(A);
						StartMatrix(B);

						printf("Matrix_A:\n");
						PrintMatrix(A);

						printf("\nMatrix_B:\n");
						PrintMatrix(B);

						printf("\n\n");
						
						CrossProduct(A, B, CP);
						printf("Matrix_A x Matrix_B:\n");
						PrintMatrix(CP);
					}
					case 2: {
						DotProduct();
						//dot Product
					}
					}
					
				}
					
				}
				

					//Simple Math
				break;
					}
			case 4:{
				printf("Case 4\n");
					//exit
					end=true;
					 //exit
				
					}

				}
	
}
}


