#include<iostream>
using namespace std;
int Max(int a, int b);
int main(){
	int a,b,c;
		cout<<"introduzca el valor del 1er numero ";
	cin>> a;
	cout<<"introduzca el valor del 2do numero ";
	cin>> b;
	cout<<"introduzca el valor del 3er numero ";
	cin>> c;
	int max=Max(Max(a,b) ,c);
	cout<<" El mayor es "<<max<<endl;
	return 0;
}
int Max(int a, int b){
	int c;
	
	if (a>b ){ c=a;
	}
	else{ c=b;
	}
	return c;
}
