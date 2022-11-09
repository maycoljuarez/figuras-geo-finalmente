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

cout<<"____________________________________tronco de cono__________________________"<<endl;
	
	cout<<"elija  que necesitara del tronco del cono \n1- area lateral\n2- area total\n3- volumen"<<endl;
			cin>>seg;
				switch(seg){
					case 1:
						do {
		cout << "ingresar valores para Al TRONCO DE CONO, ingrsar g, luego ingresar r, ingresar Rs" << endl;
		cin >> g;
		cin >> r;
		cin >> rs;
	} while (!((g>0 && r>0 && rs>0)));
	al = M_PI*g*(r+rs);
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
					break;
						
					case 2:
					do {
		cout << "ingresar valores para At CILINDRO, ingrsar Al, luego ingresar AB, ingresar Ab" << endl;
		cin >> al;
		cin >> ab;
		cin >> ab;
	} while (!((al>0 && ab>0 && ab>0)));
	at = al+ab+ab;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
					break;
					
					case 3:
					do {
		cout << "ingresar valores para V CONO, ingrsar h, luego ingresar Rs, ingresar r" << endl;
		cin >> h;
		cin >> rs;
		cin >> r;
	} while (!((h>0 && rs>0 && r>0)));
	v = (M_PI*h*(pow(rs,2)+pow(r,2)+r*r));
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
					break;	
				}
	
	
	
	return 0;
}