#include "iostream"
using namespace std;

int main()
{

	cout<< "Hola :) Este programa 2 unidad 2"<<"\n";
	

	float SUELDO, aum, nsue;
	

	cout<<"por favor ingresa el sueldo:   ";
	
	
	cin>>SUELDO;
	
if(SUELDO < 400000.00)
  {
  	aum = SUELDO * 0.15;
  	nsue = SUELDO + aum;
  }
    cout << "El aumento es:    "<<aum<<"\n";
  cout << "El nuevo sueldo es:  "<<nsue;
 
 
}
