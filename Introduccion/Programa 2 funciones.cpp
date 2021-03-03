#include<iostream>
using namespace std;

void Max(int a, int b);
int main (){
	int a,b;
		cout<<"introduzca el valor del 1er numero ";
	cin>> a;
	cout<<"introduzca el valor del 2do numero ";
	cin>> b;
	Max (a,b);
	return 0;
}
void Max(int a, int b){
	if (a>b ){
		cout<<a<<" es mayor "<<endl;
	}
	else if (a<b){
		cout<<b<<" es mayor "<<endl;
	}
	else{
		cout<< " error "<<endl;
	}
}
