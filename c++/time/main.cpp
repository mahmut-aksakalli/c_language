#include "time.cpp"

int main(){
	time s;
try{
	s.setTime(99,1,1);	
}
catch( invalid_argument &ex){
	cout << "Exception: " << ex.what() << endl << endl;
}




}


