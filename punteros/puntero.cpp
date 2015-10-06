#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
	int tam=0, areg[tam];
	cout<<"De el tamano del arreglo: ";
	cin>>tam;
	int *pun=(int*)malloc(sizeof(int)*tam);
	pun=areg;
	for(int i=0;i<tam;i++){
		*pun=i+1;
		cout<<areg[i]<<", ";
		pun++;
	}
	free(pun);
	return 0;
}
