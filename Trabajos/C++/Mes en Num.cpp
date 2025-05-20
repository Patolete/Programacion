#include <iostream>

using namespace std;

int main(){
	int mes;
	cout<<"Digite un mes en numeros: "<<endl; cin>>mes;
	switch(mes){
		case 1:cout<<"\nEl mes equivalente al numero "<<mes<<" es Enero"<<endl; break;
		case 2:cout<<"\nEl mes equivalente al numero "<<mes<<" es Febrero"<<endl; break;
		case 3:cout<<"\nEl mes equivalente al numero "<<mes<<" es Marzo"<<endl; break;
		case 4:cout<<"\nEl mes equivalente al numero "<<mes<<" es Abril"<<endl; break;
		case 5:cout<<"\nEl mes equivalente al numero "<<mes<<" es Mayo"<<endl; break;
		case 6:cout<<"\nEl mes equivalente al numero "<<mes<<" es Junio"<<endl; break;
		case 7:cout<<"\nEl mes equivalente al numero "<<mes<<" es Julio"<<endl; break;
		case 8:cout<<"\nEl mes equivalente al numero "<<mes<<" es Agosto"<<endl; break;
		case 9:cout<<"\nEl mes equivalente al numero "<<mes<<" es Septiembre"<<endl; break;
		case 10:cout<<"\nEl mes equivalente al numero "<<mes<<" es Octubre"<<endl; break;
		case 11:cout<<"\nEl mes equivalente al numero "<<mes<<" es Noviembre"<<endl; break;
		case 12:cout<<"\nEl mes equivalente al numero "<<mes<<" es Diciembre"<<endl; break;
	}
	return 0;
}
