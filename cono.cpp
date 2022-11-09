/*nombre:
autor:maycol juarez
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

cout<<"::::::::::::::::::::::::::::::::::::::::::.::CONO:::::::::::::::::::::::::::::::::::::::::"<<endl;

	cout<<"elija  que necesitara del cono \n1- area lateral\n2- area total\3- volumen"<<endl;
		cin>>seg;
				switch(seg){
					case 1:
							do {
		cout << "ingresar valores para Al CONO, ingrsar P, luego ingresar g" << endl;
		cin >> p;
		cin >> g;
	} while (!((p>0 && g>0)));
	al = (p*g)/2;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
						break;
					case 2:
						do {
		cout << "ingresar valores para At CONO, ingrsar g, luego ingresar r" << endl;
		cin >> g;
		cin >> r;
	} while (!((g>0 && r>0)));
	at = M_PI*r*(g+r);
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
						
						break;
					
					case 3:
						do {
		cout << "ingresar valores para V CONO, ingrsar r, luego ingresar h" << endl;
		cin >> r;
		cin >> h;
	} while (!((r>0 && h>0)));
	v = (M_PI*pow(r,2)*h)/3;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
						
						
						break;
						
 
}


return 0;
}
 