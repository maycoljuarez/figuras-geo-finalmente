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

	cout<<"------------------------------------tronco de piramide--------------------"<<endl;
	
	cout<<"elija  que necesitara del tronco de piramide \n1- area lateral\n2- area total\n3- volumen"<<endl;
		cin>>seg;
				switch(seg){
					case 1:
						do {
		cout << "ingresar valores para Al TRONCO DE PIRAMIDE, ingrsar PB, luego ingresar Pb, luego ingresar Ap" << endl;
		cin >> pb;
		cin >> pb;
		cin >> ap;
	} while (!((pb>0 && pb>0 && ap>0)));
	al = ((pb+pb)/2)*ap;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
						break;
					case 2:
						do {
		cout << "ingresar valores para At de TRONCO DE UNA PIRAMIDE , ingrsar Al, luego ingresar AB, luego Ab" << endl;
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
		cout << "ingresar valores para V de TRONCO DE UNA PIRAMIDE , ingrsar h, luego ingresar AB, luego Ab" << endl;
		cin >> h;
		cin >> ab;
		cin >> ab;
	} while (!((h>0 && ab>0 && ab>0)));
	v = (h*(ab+ab+sqrtf(ab*ab)))/3;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
						break;
					
				}
	
	
	
	return 0;
}