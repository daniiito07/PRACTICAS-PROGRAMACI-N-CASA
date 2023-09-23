// P002_Valor_absoluto_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes Cano
// Podremos obter el valor absoluto de número positivos y negativos


#include <cmath>
#include <iostream>
#include <locale>
int main()
{
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    float valor;
    std::cout << " Hola usuario, hoy podrás conocer el valor absoluto de cualquier numero, ya sea positivo o negativo\n";
    std::cout << "Escribe un numero positivo o negativo ";
    std::cin >> valor;
    float valorAbsoluto = abs(valor);
    std::cout << "El valor absoluto es " << valorAbsoluto;



}

