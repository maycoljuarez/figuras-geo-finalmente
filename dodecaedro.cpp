
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
	
	
	cout<<"____________________________________DODECAEDRO__________________________-"<<endl;
	cout<<"elija  que necesitara del dodecaedro \n1- area \n2- volumen"<<endl;	
		cin>>seg;
				switch(seg){
					case 1:
						cont = 0;
	do {
		cout << "ingresar valores para A de DODECAEDRO, ingrsar a" << endl;
		cin >> a;
		cont = cont+1;
	} while (!((a>0 || cont==3)));
	if ((a>0)) {
		a = (3*pow(a,2))*sqrtf(25+(10*sqrtf(5)));
		cout << " la area  es igual a " << a << endl;
	}
						break;
					case 2:
							do {
		cout << "ingresar valores para V de DODECAEDRO, ingrsar a" << endl;
		cin >> a;
	} while ((a<=0));
	v = (1/4)*(15+(7*sqrtf(5)))*pow(a,3);
	cout << " la volumen  es igual a " << v << endl;
						
						break;
					
					
				}
	
	
	return 0;
}







