#include <iostream>

using namespace std;

int main(){
	float alum1,alum2,alum3,alum4, resultado;
	cout<<"Digite la nuta del alumno N1: "; cin>>alum1;
	cout<<"Digite la nuta del alumno N2: "; cin>>alum2;
	cout<<"Digite la nuta del alumno N3: "; cin>>alum3;
	cout<<"Digite la nuta del alumno N4: "; cin>>alum4;
	
	resultado = (alum1+alum2+alum3+alum4)/4;
	cout.precision(3);
	cout<<"\nEl promedio de las notas de los 4 alumnos es: "<<resultado<<endl;
	return 0;
}
