#include<iostream>

using namespace std;

void fill(float mat[][99], int n);

void show(float mat[][99], int n);

void mult(float matA[][99],float matB[][99], int n);

int n=99;
float mat[99][99], res[99][99];

int main()
{
	int x=9;
	cout<<"De el tamaño de las matrices.. \n";
	cin>>x;
	float matA[99][99], matB[99][99];
	cout <<"Llene la primera matriz (nxn)\n";
	fill(matA,x); 
	cout <<"Llene la segunda matriz (nxn)\n";
	fill(matB,x);
	cout<<"las matrices son: \n";
	show(matA,x);
	cout<<"\ny\n";
	show(matB,x);
	cout<<"la multiplicacion es: \n";
	mult(matA,matB,x);
	show(res,x);
	return 0;
}


void fill(float mat[][99], int n)
{
	int i=0,j=0;
	for (i=0;i<n;i++)
		for (j=0;j<n;j++)
			cin>>mat[i][j];
}
void show(float mat[][99], int n)
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
