#include<iostream>

using namespace std;

void fill(float mat[][n], int n);

void show(float mat[][n], int n);

void mult(float matA[][n],float matB[][n], int n);

int n=99;
float mat[n][n], res[n][n];

int main()
{
	
	float matA[n][n], matB[n][n];
	cout<<"De el tamaño de las matrices.. \n";
	cin>>n;
	cout <<"Llene la primera matriz (nxn)\n";
	fill(matA,n); 
	cout <<"Llene la segunda matriz (nxn)\n";
	fill(matB,n);
	cout<<"las matrices son: \n";
	show(matA,n);
	cout<<"\ny\n";
	show(matB,n);
	cout<<"la multiplicacion es: \n";
	mult(matA,matB,n);
	show(res);
	return 0;
}


void fill(float mat[][n], int n)
{
	int i=0,j=0;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			cin>>mat[i][j];
}
void show(float mat[][n], int n)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		cout<<"[";
		for(j=0;j<n;j++)
			cout<<mat[i][j]<<", ";
		cout<<"]\n";
	}
}

void mult (float matA[][n],float matB[][n], int n)
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
