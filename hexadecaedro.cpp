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
	
	
	cout<<"------------------------------HEXADECAEDRO---------------------------"<<endl;
	
	cout<<"elija  que necesitara del hexadecaedro \n1- area \n2- diametro\n3- volumen"<<endl;
			cin>>seg;
				switch(seg){
					case 1:
						cont = 0;
	do {
		cout << "ingresar valores para A de HEXADECAEDRO, ingrsar a" << endl;
		cin >> a;
		cont = cont+1;
	} while (!((a>0 || cont==3)));
	if ((a>0)) {
		a = 6*pow(a,2);
		cout << " la area  es igual a " << a << endl;
	}
						break;
					case 2:
							do {
		cout << "ingresar valores para D de HEXADECAEDRO, ingrsar a" << endl;
		cin >> a;
	} while ((a<=0));
	d = a*sqrtf(3);
	cout << " la D  es igual a " << d << endl;
						
						break;
					case 3:
						do {
		cout << "ingresar valores para V de HEXADECAEDRO, ingrsar a" << endl;
		cin >> a;
	} while ((a<=0));
	v = pow(a,3);
	cout << " la Volumen  es igual a " << v << endl;
						break;
					
				}
	
	
	
	
return 0;	
}