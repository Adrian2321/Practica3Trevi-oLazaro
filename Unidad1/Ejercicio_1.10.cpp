#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	cout<<"Hola! Este programa 1.10 calcula la base y la altura de un rectangulo" <<"\n";
	float 	base, altura, area, perimetro;
	std::cout <<"ingresa la base del rectangulo: ";
	std::cin>> base;
	std::cout<<"ingrase la altura del rectangulo: ";
	std::cin>> altura;
	area= base*altura;
    perimetro= 2* (base + altura); 
    std::cout<<"El area del rectangulo es: "<<area << std::endl;
	std::cout<<"El perimetro del rectangulo: "<<perimetro << std::endl;
	return 0;

}
