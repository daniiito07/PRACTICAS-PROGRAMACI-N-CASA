// P014_Bucles_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes C.
// Crear un contador lento, uno de 10 en 10 y otro de 1000 a 0

#include <iostream>
#include <locale.h>
#include <Windows.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    std::cout << "Empezaremos con el contador de 1000 a 0\n";
    int i = 0;
    for (i = 1000; i >= 0; i = i--)
    {
        std::cout << "El contador va en: " << i << std::endl;
    }
    std::cout << "Ahora sigue el contador de 10 en 10\n";

    for (i = 0; i <= 1000; i = i + 10)
    {
        std::cout << "El contador va en: " << i << std::endl;
    }
    std::cout << "Ahora sigue el contador de 0 a 100 lento\n";

    for (i = 0; i <= 100; i = i + 1)
    {
        std::cout << "El contador va en: " << i << std::endl;
        Sleep(300);
    }

}