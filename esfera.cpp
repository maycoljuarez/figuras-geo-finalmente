/*nombre:
autor:
lugar: ITV
instrucciones: 
*/



#include<iostream>
#include<math.h>
using namespace std;



int main(){
float pb;
	float ab;
	float rs;
    float a;
	float al;
	float ap;
	float ap_1;
	float at;
	float b;
	float b_1;
	float g;
	float h;
	float n;
	float n_1;
	float p;
	float r;
	float r_1;
	float v;	
int fig, seg;	
	int cont, d;
	
cout<<"________________________________________ESFERA____________________________"<<endl;

cout<<"elija  que necesitara del esfera \n1- area\n2- volumen"<<endl;
			cin>>seg;
				switch(seg){
					case 1:
					cont = 0;
	do {
		cout << "ingresar valores para A ESFERA, ingrsar r" << endl;
		cin >> r;
		cont = cont+1;
	} while (!((r>0 || cont==3)));
	if ((r>0)) {
		a = 4*M_PI*pow(r,2);
		cout << " la area  es igual a " << a << endl;
	}	
						break;
					case 2:
						do {
		cout << "ingresar valores para V ESFERA, ingrsar r" << endl;
		cin >> r;
	} while ((r<=0));
	v = (4*M_PI*pow(r,3))/3;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
						
						break;
					
					
	}
}