#include<iostream>
using namespace std;
int main(){
	int tam=0, areg[tam],*pun;
	cout<<"De el tamano del arreglo: ";
	cin>>tam;
	for(int i=1;i<=tam;i++){
		pun=&areg[i-1];
		*pun=i;
		cout<<*pun<<", ";
	}
	return 0;
}
