#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int x, y, x2;
	cout<<"Digite X e Y: "<<endl; cin>>x>>y;
	x2 = x;
	if(y == 0){
		cout<<"X a la Y es: 1"<<endl;
	}
	else{
		for(;y > 1;y--){
		x *= x2;
	}
		cout<<"X a la Y es: "<<x<<endl;
	}
	getch();
	return 0;
}
