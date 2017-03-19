#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

class myclass{
public:
	int a,b;	
	void max(int i,int j); //Fonksiyon prototipinde inline yazmaya gerek yok
	myclass(int x,int y){ a=x; b=y;} //Class içinde yazýlan fonksiyonlar otomatik inline dýr.		
};

inline void myclass::max(int i,int j){ //inline fonksiyon tanýmlama
	cout << (i>j ? i : j) ;
}

int main(){
	myclass x(30,23);
	x.max (x.a,x.b);
	
return 0;	
}
