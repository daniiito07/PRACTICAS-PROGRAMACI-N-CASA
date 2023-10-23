// P015_Batallapokemon_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes C.
// Realizar una batalla pokemon entre 2 pokemones
#include <iostream>
#include <string>
#include <ctime>

int main() {
    srand(time(0));

    int saludgyarados = 100;
    int saludmewtwo = 100;

    std::string Gyarados = "Gyarados";
    std::string Mewtwo = "Mewtwo";

    while (saludgyarados > 0 && saludmewtwo > 0) 
    {
        int ataquegyarados = rand() % 25 + 1;
        std::cout << Gyarados << " ataca a " << Mewtwo << " por " << ataquegyarados << " puntos de daño" << std::endl;
        saludmewtwo -= ataquegyarados;

        if (saludmewtwo <= 0) 
        {
            std::cout << Mewtwo << " ha sido derrotado. " << Gyarados << " ha ganado" << std::endl;
            break;
        }

        int ataquemewtwo = rand() % 20 + 1;
        std::cout << Mewtwo << " ataca a " << Gyarados << " por " << ataquemewtwo << " puntos de daño" << std::endl;
        saludgyarados -= ataquemewtwo;

        if (saludgyarados <= 0) 
        {
            std::cout << Gyarados << " ha sido derrotado. " << Mewtwo << " ha ganado" << std::endl;
            break;
        }
    }

    return 0;
}
