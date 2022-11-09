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


cout<<"-------------------------------tetraedro----------------------"<<endl;
		cout<<"elija  que necesitara del tetraedro \n1- volumen\n2- area\n3- altura"<<endl;
		cin>>seg;
				switch(seg){
					case 1:
						do {
		cout << "ingresar valores para V de TETRAEDRO, ingrsar a" << endl;
		cin >> a;
	} while ((a<=0));
	v = (sqrtf(2))/12*pow(a,3);
	cout << " la Volumen  es igual a " << v << endl;
						break;
					case 2:
						do {
		cout << "ingresar valores para A de TETRAEDRO, ingrsar a" << endl;
		cin >> a;
	} while ((a<=0));
	a = pow(a,2)*sqrtf(3);
	cout << " la area  es igual a " << a << endl;
						
						break;
					case 3:
							do {
		cout << "ingresar valores para H de TETRAEDRO, ingrsar a" << endl;
		cin >> a;
	} while ((a<=0));
	h = a*((sqrtf(6))/3);
	cout << " la huso  es igual a " << h << endl;
						
						break;
					
				}
	
	
	
	return 0;
}