#include <iostream>
using namespace std;

double hitungLPersegi(double s){
	double L = s * s;
	return L;

}

double hitungKPersegi (double s){
	double K = 4 * s;
	return K;
}

void LuasPersegi (double s){
	double L = hitungLPersegi(s);
	cout<<"Luas : "<<endl;
	cout<<"L \t = s x s"<<endl;
	cout<<"L \t = "<<s<<" x "<<s<<endl;
	cout<<"L \t = "<<L<<endl;
}

void KelilingPersegi (double s){
	double K = hitungKPersegi(s);
	cout<<"Keliling : "<<endl;
	cout<<"K \t = "<<4<<" x "<<s<<endl;
	cout<<"K \t = "<<K<<endl;
	
}




int main(){
	double L, s;
	cout<<"masukan sisi : "; cin>>s;
	LuasPersegi (s)	;
	cout<<"=================================="<<endl;
	KelilingPersegi(s);
	
}
