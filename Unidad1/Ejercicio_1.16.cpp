#include <iostream>
#include "math.h"
using namespace std;
int main()
{
	cout<<"Hola! Este programa 1.16 calcula el auxiliar y el area de un traingulo" <<"\n";
	float S, L1, L2, L3, Area, Calculo;
	std::cout <<"ingresa el primer lado: ";
	std::cin>> L1;
	std::cout<<"ingrase el segundo lado: ";
	std::cin>> L2;
	std::cout<<"ingrase el tercer lado: ";
	std::cin>> L3;
	S= (L1+L2+L3)/2;
    Area= sqrt(S*( S-L1)*(S-L2)*(S-L3));	 
    std::cout<<"El auxiliar del triangulo es: "<<S << std::endl;
	std::cout<<"El area del rectangulo es: "<<Area << std::endl;
	return 0;

}
