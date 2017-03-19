#include <iostream>
#include <cstring>

using namespace std;

class shared{
	static int a; // static atanan bir data tüm objelerde ayný deðere sahiptir.
	int b;
public:
	void set(int i,int j){ a = i ; b = j; }	
	void show(); 		
};

int shared::a; // static member class dýþýnda da define edilmek zarunda c99 standartlarýnda..

void shared::show(){
	cout << "This is static a : " << a;
	cout << "\nThis is non-static b : " << b;
	cout << "\n";
}

int main(){
	shared::a = 99; // if you want to initialize a before creating any objects
		
	shared x,y;
	
	x.set(1,1);
	x.show();
	
	y.set(2,2);
	y.show();
	
	x.show();
		
return 0;	
}
