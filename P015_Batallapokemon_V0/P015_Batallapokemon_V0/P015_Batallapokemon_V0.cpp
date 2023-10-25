// P015_Batallapokemon_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes C.
// Realizar una batalla pokemon entre 2 pokemones
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "ES_MX.UTF-8");
    srand(time(0));

    std::string Gyarados = "Gyarados";
    std::string Mewtwo = "Mewtwo";

    bool continuar = true;

    while (continuar) {
        int saludgyarados = 100;
        int saludmewtwo = 100;

        while (saludgyarados > 0 && saludmewtwo > 0) {
            std::cout << "Es tu turno. Elige una opción:\n";
            std::cout << "1. Atacar\n";
            std::cout << "2. Esquivar\n";
            std::cout << "3. Huir\n";

            int opcion;
            std::cin >> opcion;

            int ataquegyarados = 0;

            switch (opcion) {
            case 1: 
                ataquegyarados = rand() % 25 + 1;
                std::cout << "Atacas a " << Mewtwo << " por " << ataquegyarados << " puntos de daño." << std::endl;
                saludmewtwo -= ataquegyarados;
                break;
            case 2: 
                std::cout << "Intentas esquivar el ataque de " << Mewtwo << "." << std::endl;
                break;
            case 3: 
                std::cout << "Has decidido huir de la batalla. " << Mewtwo << " gana." << std::endl;
                return 0; 
            default:
                std::cout << "Opción inválida. Elige una opción válida." << std::endl;
                continue; 
            }

            if (saludmewtwo <= 0) {
                std::cout << Mewtwo << " ha sido derrotado. " << Gyarados << " gana!!" << std::endl;
                break;
            }
            int ataquemewtwo = rand() % 20 + 1;
            std::cout << Mewtwo << " ataca a " << Gyarados << " por " << ataquemewtwo << " puntos de daño." << std::endl;
            saludgyarados -= ataquemewtwo;

            if (saludgyarados <= 0) {
                std::cout << Gyarados << " ha sido derrotado. " << Mewtwo << " gana!!" << std::endl;
                break;
            }
        }

        std::cout << "¿Quieres pelear de nuevo? (1 para sí, 0 para no): ";
        std::cin >> continuar;
    }

    return 0;
}
