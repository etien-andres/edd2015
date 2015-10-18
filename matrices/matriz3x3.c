#include<stdio.h>


void fill(float mat[][3]);

void show(float mat[][3]);

void mult(float matA[][3],float matB[][3]);

float mat[3][3], res[3][3];

int main()
{
	float matA[3][3], matB[3][3];
	printf("Llene la primera matriz (3x3)\n");
	fill(matA); 
	printf("Llene la segunda matriz (3x3)\n");
	fill(matB);
	printf("las matrices son: \n");
	show(matA);
	printf("\ny\n");
	show(matB);
	printf("la multiplicacion es: \n");
	mult(matA,matB);
	show(res);
	return 0;
}


void fill(float mat[][3])
{
	int i=0,j=0;
	for (i=0;i<3;i++)
		for (j=0;j<3;j++)
			scanf("%f", &mat[i][j]);
}
void show(float mat[][3])
{
	int i=0,j=0;
	for(i=0;i<3;i++)
	{
		printf("[");
		for(j=0;j<3;j++)
			printf("%.2f,", mat[i][j]);
		printf("]\n");
	}
}

void mult (float matA[][3],float matB[][3])
{
	int i=0,j=0,k=0;
	for (i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{

				res[i][j]=0;
				for(k=0;k<3;k++)
					{
					res[i][j]=(matA[i][k]*matB[k][j])+res[i][j]; 
					}
				}
		}
}
