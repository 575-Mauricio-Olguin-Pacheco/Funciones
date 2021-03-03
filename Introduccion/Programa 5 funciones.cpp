#include<iostream>
using namespace std;
int Factorial(int a);
int main(){
	int a;
	cout<<" Introduce el valor de un numero ";
	cin>>a;
	int fact= Factorial (a);
	cout<<"El resultado es "<<fact<<endl;
}
int Factorial(int a){
	int i;
	int resultado=1;
	for(i=1;i<=a;i++){
		resultado*=i;
	}
	return resultado;
}
