#include <iostream>
#include<fstream>

using namespace std;

int main(){
	
	ifstream dosya("x.txt",ios::in);
	
int n;
char isim[100];

	while(!dosya.eof())
	{
		dosya>>n>>isim;
		cout<< n<<"\t"<<isim<<endl;
	}
}
