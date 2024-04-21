#include "iostream"
#include "string"
#include "math.h"

using namespace std;
int main ()
{
	cout << "hola! este program 1.8 imprime la escritura de la matricula y el promedio  de 5 notas de un alumno" << "\n";
	float matricula, a, b, c, d, e;
	
     cout<<"introduzca el numero de matricula del alumno:   ";
	 cin>>matricula;
	 
	 cout<<"introduce la primera calificacion:   ";
	 cin>>a;
	 
	 cout<<"introduce la segunda calificacion:   ";
	 cin>>b;
	  
	 cout<<"introduce la tercera calificacion:   ";
	 cin>>c;
	 
	 cout<<"introduce la cuarta calificacion:   ";
	 cin>>d;
	
	 cout<<"introduce la quinta calificacion:   ";
	 cin>>e;
	 
	 cout<<"la matricula del alumno es  " <<matricula<<endl;
	 
	 cout<<"el proimedio es:     "<<((a+b+c+d+e)/5)<<endl;
	 
	 cin.get();cin.get();
	
return 0;
}
