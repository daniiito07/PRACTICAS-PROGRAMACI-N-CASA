// P006_REPASO_ENTRADA_SALIDAD_DATOS_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes Cano
// Solicitar al usuario datos para realizar decisiones simples

#include <iostream>
#include <string>
#include <locale>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    std::string cadena_caracter;
    int mayor_edad = 18;
    std::string tiemp;

    std::cout << "Hola usuario, bienvenido al repaso!\n";
    std::cout << "Te vamos a pedir varios datos para poder pasar al restaurante, necesitas ser mayor de edad, ¿Cuantos años tienes? :D \n";
    std::cin >> mayor_edad;
    if (mayor_edad >= 18)
    {
        std::cout << "Adelante, puedes pasar!\n";
        std::cout << "¿Por qué quieres entrar a este restaurante?\n";
        getline(std::cin, cadena_caracter);
        std::cout << " Siento mucho la espera, ya puedes pasar\n";
    }
        
    else
    {
        std::cout << "Lo siento, eres muy pequeño para pasar\n";
    }

  



}