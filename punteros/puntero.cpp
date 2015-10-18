#include<iostream>
using namespace std;
int main(){
	int i=0,tam=0,*areglo;
	cout<<"De el tamano del arreglo: ";
	cin>>tam;
	areglo=new int[tam];
	for(i=0;i<tam;i++){
		areglo[i]=i+1;
	}
	cout<<endl;
	cout<<"El arreglo es \n";
	for(i=0;i<tam;i++){
		cout<<areglo[i]<<", ";
	}
	cout<<endl;
	delete [] areglo;
	return 0;
}
