#include<iostream>
using namespace std;

void suma (int a, int b);
int main(){
	int a,b;
	cout<<"introduzca un numero ";
	cin>> a;
	cout<<"introduzca un numero ";
	cin>> b;
	suma (a,b);

}
void suma(int a, int b){
	int c=a+b;
	cout<< "el resultado de "<<a<<" + "<< b << " es: " << c << endl;
	return 0;
}
