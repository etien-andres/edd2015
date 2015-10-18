#include<stdio.h>


void fill(float mat[][99], int n);

void show(float mat[][99], int n);

void mult(float matA[][99],float matB[][99], int n);

int n=99;
float matA[99][99],matB[99][99] , res[99][99];

int main()
{
	int x=9;
	printf("De el tamaño de las matrices.. \n");
	scanf("%d",&x);
	printf("Llene la primera matriz (nxn)\n");
	fill(matA,x); 
	printf("Llene la segunda matriz (nxn)\n");
	fill(matB,x);
	printf("las matrices son: \n");
	show(matA,x);
	printf("\ny\n");
	show(matB,x);
	printf("la multiplicacion es: \n");
	mult(matA,matB,x);
	show(res,x);
	return 0;
}


void fill(float mat[][99], int n)
{
	int i=0,j=0;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			scanf("%f",&mat[i][j]);
}
void show(float mat[][99], int n)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		printf("[");
		for(j=0;j<n;j++)
			printf("%.2f ,", mat[i][j]);
		printf("]\n");
	}
}

void mult (float matA[][99],float matB[][99], int n)
{
	int i=0,j=0,k=0;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		{
			res[i][j]=0;
			for(k=0;k<n;k++)
				res[i][j]=(matA[i][k]*matB[k][j])+res[i][j]; 
		}
}
