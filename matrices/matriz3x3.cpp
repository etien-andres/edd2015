#include<iostream>

using namespace std;

void fill(float mat[][3]);

void show(float mat[][3]);

void mult(float matA[][3],float matB[][3]);

float mat[3][3], res[3][3];

int main()
{
	float matA[3][3], matB[3][3];
	cout <<"Llene la primera matriz (3x3)\n";
	fill(matA); 
	cout <<"Llene la segunda matriz (3x3)\n";
	fill(matB);
	cout<<"las matrices son: \n";
	show(matA);
	cout<<"\ny\n";
	show(matB);
	cout<<"la multiplicacion es: \n";
	mult(matA,matB);
	show(res);
	return 0;
}


void fill(float mat[][3])
{
	int i=0,j=0;
	for (i=0;i<3;i++)
		for (j=0;j<3;j++)
			cin>>mat[i][j];
}
void show(float mat[][3])
{
	int i=0,j=0;
	for(i=0;i<3;i++)
	{
		cout<<"[";
		for(j=0;j<3;j++)
			cout<<mat[i][j]<<", ";
		cout<<"]\n";
	}
}

void mult (float matA[][3],float matB[][3])
{
	int i=0,j=0,k=0;
	for (i=0;i<3;i++)
		for (j=0;j<3;j++)
		{
			res[i][j]=0;
			for(k=0;k<3;k++)
				res[i][j]=(matA[i][k]*matB[k][j])+res[i][j]; 
		}
}
