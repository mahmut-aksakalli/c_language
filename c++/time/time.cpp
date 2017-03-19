#include<iostream>
#include<iomanip>
#include<stdexcept>

#include "time.h"

using namespace std;

time::time(){

	hour = minute = second = 0;	
}
// ##	setTime Fonksiyonu 
void time::setTime(int h,int m, int s){
 	if ( ( h >= 0 && h < 24 ) && ( m >= 0 && m < 60 ) &&
		 ( s >= 0 && s < 60 ) ) {
		 	hour = h;
		 	minute = m;
		 	second = s;
		 }	
	else{
		throw invalid_argument("hour, minute and/or second was out of range" );
	}		 
}

// ## printUniversal()
void time::printUniversal(){
	
	cout << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << ":" 
	<< setw(2) << second<<endl;
}

void time::printStandard(){
	cout << setfill('0') << ((hour==0 || hour == 12) ? 12 : hour % 12) << ":" << setw(2) <<
		minute << ":" << setw(2) << second << ((hour < 12) ? " AM" : " PM") << endl;
}
