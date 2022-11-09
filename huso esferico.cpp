	
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

	cout<<"_______________________________HUSO ESFERICO____________________"<<endl;
	
		cout<<"elija  que necesitara del huso esferico \n1- area \n2- volumen"<<endl;
		cin>>seg;
				switch(seg){
					case 1:
							do {
		cout << "ingresar valores para A de HUSO ESFERICO, ingrsar r, luego ingresar grados n" << endl;
		cin >> r;
		cin >> n;
	} while (!((r>0 && n>0)));
	a = (4*M_PI*n)/360;
	cout << " la area  es igual a " << a << endl;
						break;
					case 2:
						do {
		cout << "ingresar valores para V de HUSO ESFERICO, ingrsar r, luego ingresar grados n" << endl;
		cin >> r;
		cin >> n;
	} while (!((r>0 && n>0)));
	v = (3/4)*((M_PI*pow(r,3)*n)/360);
	cout << " la Volumen  es igual a " << v << endl;
						
						break;
}
	return 0;
}