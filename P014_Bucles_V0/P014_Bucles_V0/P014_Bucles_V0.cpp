// P014_Bucles_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes C.
// Crear un contador lento, uno de 10 en 10 y otro de 1000 a 0

#include <iostream>
#include <locale.h>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL "ES_MX.UTF-8");
    bool repetir = true;
   while (repetir){
    for (int i = 100; i >= 0; i = i--)
    {
        std::cout << "El contador de 100 a 0 va en : " << i << std::endl;
        Sleep(50);
    }
    std::cout << "EL CONTADOR DE 10x10\n";
    for (int i = 1; i <= 100; ++i)
    {
        std::cout << i << " ";
        Sleep(50);
        if (i % 10 == 9)
        {
            std::cout << std::endl;
        }
    }
    std::cout << "Conteo de 1000 a 0 con tres tipos de ciclos:\n";

    // Ciclo FOR
    std::cout << "Ciclo FOR:\n";
    for (int i = 1000; i >= 0; i--)
    {
        std::cout << "El contador va: " << i << std::endl;
        
    }

    // Ciclo DO-WHILE
    std::cout << "Ciclo DO-WHILE:\n";
    int j = 1000;
    do {
        std::cout << "El contador va: " << j << std::endl;
        j--;
        
    } while (j >= 0);

    // Ciclo WHILE
    std::cout << "Ciclo WHILE:\n";
    int k = 1000;
    while (k >= 0) {
        std::cout << "El contador va: " << k << std::endl;
        k--;

    }
    std::cout << "¿ QUIERES REPETIR LOS CONTADORES ?   (1. SI   0. NO)\n ";
    std::cin >> repetir;

   }
    return 0;

  
}
