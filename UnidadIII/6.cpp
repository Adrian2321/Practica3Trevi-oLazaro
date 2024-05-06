#include "iostream"
#include "string"

int main() {
    int numero;
    std::cout << "Ingresa un numero entero: ";
    std::cin >> numero;

    if (std::cin.fail()) {
        std::cerr << "Por favor, ingresa un numero entero válido." << std::endl;
        return 1; 
    }

    if (numero % 2 == 0) {
        std::cout << numero << " Es Par" << std::endl;
    } else {
        std::cout << numero << " Es Impar" << std::endl;
    }

    return 0;
}

