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
cout<<"-----------------------octaedro-------------------"<<endl;
	cout<<"elija  que necesitara del octaedro \n1- area \n2- volumen"<<endl;
		cin>>seg;
				switch(seg){
					case 1:
						do {
		cout << "ingresar valores para A de OCTAEDRO, ingrsar a" << endl;
		cin >> a;
	} while ((a<=0));
	a = 2*pow(a,32)*sqrtf(3);
	cout << " la area  es igual a " << a << endl;
						break;
					case 2:
					do {
		cout << "ingresar valores para V de OCTAEDRO, ingrsar a" << endl;
		cin >> a;
	} while ((a<=0));
	v = (sqrtf(2)/3)*pow(a,3);
	cout << " la volumen  es igual a " << v << endl;	
						
						break;
					
						
					
				}
	
	
	
return 0;	
}