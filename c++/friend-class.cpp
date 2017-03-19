#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

class myclass{
	int a,b;
public:
	myclass(int i, int j){ a = i; b = j; }
	friend class x; //Friend class tüm data member ve fonksiyonlara ulaþabilir ..
};

class x{
public : 
	int min(myclass sinif){ return sinif.a < sinif.b ? sinif.a : sinif.b ; }
};

int main(){
	myclass myc(100,20);
	x object;
	cout << object.min(myc);
	
	
return 0;	
}
