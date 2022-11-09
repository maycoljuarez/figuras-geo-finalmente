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

	
	cout<<"-----------------------------PRISMA------------------------------------------"<<endl;
		cout<<"elija  que necesitara del prisma \n1- area lateral\n2- area total\n3- volumen"<<endl;
		cin>>seg;
				switch(seg){
					case 1:
							do {
		cout << "ingresar valores para Al PRISMA, perimetro P, altura h " << endl;
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
		cout << "ingresar valores para At PRISMA, area lateral AL, Area A " << endl;
		cin >> al;
		cin >> a;
	} while (!((al>0 && a>0)));
	at = al+(2*a);
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
						
						break;
					case 3:
						do {
		cout << "ingresar valores para V PRISMA, A , altura h " << endl;
		cin >> a;
		cin >> h;
	} while (!((a>0 && h>0)));
	v = a*h;
	cout << " la area lateral es igual a " << al << endl;
	cout << " el area total es igual a " << at << endl;
	cout << " el volumen es igual a " << v << endl;
						break;
						
					
				}
	
	return 0;
	}