#include <iostream>
#include <string.h>
using namespace std;
int main(){
	int num=0,rest=0,cont=0,fin=3;
	cout<<"";
	cin>>num;
	while(num != 1){
		rest=num%2;
		num/=2;
		if(rest == 1){
			cont++;
		}
	}
	cont++;
	cout<<cont;
	return 0;
}
