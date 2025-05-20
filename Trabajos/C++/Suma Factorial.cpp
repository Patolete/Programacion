#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int sumaF = 0, n, fact=1;
	cout<<"Digite un numero: "<<endl; cin>>n;
	for(int i=1; i <=n; i++){
		fact *= i;
		sumaF += fact;
	}
	cout<<"La suma de factoriales es: "<<sumaF<<endl;
	getch();
	return 0;
}
