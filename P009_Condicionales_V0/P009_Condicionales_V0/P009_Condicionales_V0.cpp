// P009_Condicionales_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes C.
// Se realizará una calculadora que pueda realizar operaciones y aparte dar que numero es mayor que, junto con el valor abosulto

#include <iostream>
#include <cmath>
#include <locale>



int main() {
    setlocale(LC_ALL, "es_MX.UTF-8");
    int opcion;
    double numero1, numero2;
    bool repetir = true;
    while (repetir)
    {


        std::cout << "Hola, bienvenido a la calculadora, elige la accion que quieras hacer\n";
        std::cout << "1. Suma\n";
        std::cout << "2. Resta\n";
        std::cout << "3. Multiplicación\n";
        std::cout << "4. División\n";
        std::cout << "5. Valor Absoluto\n";
        std::cout << "6. Mayor y Menor que\n";
        std::cout << "7. Potencia\n";
        std::cout << "Elija una opción (1-7): \n";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            std::cout << "Ingrese el primer número: ";
            std::cin >> numero1;
            std::cout << "Ingrese el segundo número: ";
            std::cin >> numero2;
            std::cout << "Resultado de la suma: " << numero1 + numero2 << std::endl;
            break;
        case 2:
            std::cout << "Ingrese el primer número: ";
            std::cin >> numero1;
            std::cout << "Ingrese el segundo número: ";
            std::cin >> numero2;
            
            if (numero2 > 0)
            {
                std::cout << "Resultado de la resta: " << numero1 - numero2 << std::endl;
            }
            else
            {
                std::cout << "Resultado de la resta: " << numero2 + (numero1) << std::endl;
            }
            break;
        case 3:
            std::cout << "Ingrese el primer número: ";
            std::cin >> numero1;
            std::cout << "Ingrese el segundo número: ";
            std::cin >> numero2;
            std::cout << "Resultado de la multiplicación: " << numero1 * numero2 << std::endl;
            break;
        case 4:
            std::cout << "Ingrese el primer número: ";
            std::cin >> numero1;
            std::cout << "Ingrese el segundo número: ";
            std::cin >> numero2;
            if (numero2 != 0) {
                std::cout << "Resultado de la división: " << numero1 / numero2 << std::endl;
            }
            else {
                std::cout << "Error: No se puede dividir por cero." << std::endl;
            }
            break;
        case 5:
            std::cout << "Ingrese un número: ";
            std::cin >> numero1;
            std::cout << "Valor absoluto de " << numero1 << " es " << abs(numero1) << std::endl;
            break;
        case 6:
            std::cout << "Ingrese el primer número: ";
            std::cin >> numero1;
            std::cout << "Ingrese el segundo número: ";
            std::cin >> numero2;
            if (numero1 > numero2) {
                std::cout << numero1 << " es mayor que " << numero2 << std::endl;
            }
            else if (numero1 < numero2) {
                std::cout << numero1 << " es menor que " << numero2 << std::endl;
            }
            else {
                std::cout << numero1 << " y " << numero2 << " son iguales." << std::endl;
            }
            break;
        case 7:
            std::cout << "Ingrese el primer número: ";
            std::cin >> numero1;
            std::cout << "Ingrese el segundo número: ";
            std::cin >> numero2;
            std::cout << "El resultado de  " << numero1 << " elvado a " << numero2 << " es " << pow(numero1, numero2) << std::endl;
            break;

        default:
            std::cout << "Opción no válida. Por favor, elija una opción válida (1-7)." << std::endl;
            break;
            return 0;
           
        }
    }

  
}