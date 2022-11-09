/*nombre:cilindro
autor: maycol juarez
lugar: ITV
instrucciones: 
*/

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	int pb;
	int ab;
	int rs;
    int a;
	int al;
	int ap;
	int ap_1;
	int at;
	int b;
	int b_1;
	int g;
	int h;
	int n;
	int n_1;
	int p;
	int r;
	int r_1;
	int v;		
	int cont, d;
	int seg;
	cout<<"::::::::::::::::::::::::::::CILINDRO::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
		cout<<"elija  que necesitara del cilindro \n1- area lateral\n2- area total\n3- volumen"<<endl;
			cin>>seg;
				switch(seg){
			case 1:
						do {
				cout << "ingresar valores para Al , perimetro P, altura h " << endl;
						cin >> p;
						cin >> h;
						} while (!((p>0 && h>0)));
						al = p*h;
						cout << " la area lateral es igual a " << al << endl;
						cout << " el area total es igual a " << at << endl;
						cout << " el volumen es igual a " << v << endl;
							break;
				case 2:
					do {
				cout << "ingresar valores para At CILINDRO, ingrsar r, luego ingresar h" << endl;
						cin >> r;
						cin >> h;
				} while (!((r>0 && h>0)));
						at = 2*M_PI*r*(h+r);
						cout << " la area lateral es igual a " << al << endl;
						cout << " el area total es igual a " << at << endl;
						cout << " el volumen es igual a " << v << endl;
						
							break;
				case 3:
					do {
								cout << "ingresar valores para V CILINDRO, ingrsar r, luego ingresar h" << endl;
						cin >> r;
						cin >> h;
				} while (!((r>0 && h>0)));
							v = M_PI*pow(r,2)*h;
							cout << " la area lateral es igual a " << al << endl;
							cout << " el area total es igual a " << at << endl;
							cout << " el volumen es igual a " << v << endl;
				break;	
					
							}
		
	
	
	
	
	return 0;
}