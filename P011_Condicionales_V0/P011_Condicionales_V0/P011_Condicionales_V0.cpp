// P011_Condicionales_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes C.
// Realizar un adivina quien muy basico de 5 preguntas

#include <iostream>
#include <string>
#include <locale>

int main() {
    std::setlocale(LC_ALL, "es_MX.UTF-8");
    std::cout << "Piensa en un deporte (Futbol, Futbol americano, Rugby, Tenis, Waterpolo, Atletismo volleyball)\n";
    std::cout << "Responde unicamente con s para SI y n para NO\n";
    std::string respuesta;
    bool repetir = true;

    while (repetir)
    {
        std::cout << "¿Tu deporte se juega con un balon de forma esferica, pelota o estafeta : ";
        std::cin >> respuesta;

        if (respuesta == "s") {
            std::cout << "¿Tu deporte se juega en equipo? : ";
            std::cin >> respuesta;

            if (respuesta == "s") {
                std::cout << "¿Tu deporte se juega en una cancha grande? (s/n): ";
                std::cin >> respuesta;

                if (respuesta == "s") {
                    std::cout << "¿Tu deporte se juega principalmente con las manos? (s/n): ";
                    std::cin >> respuesta;

                    if (respuesta == "s") {
                        std::cout << "¿Tu deporte se juega en el agua? (s/n): ";
                        std::cin >> respuesta;

                        if (respuesta == "s") {
                            std::cout << "Tu deporte es waterpolo\n";
                        }
                        else {
                            std::cout << "Tu deporte es basquetbol\n";
                        }
                    }
                    else {
                        std::cout << "Tu deporte es fútbol\n";
                    }
                }
                else {
                    std::cout << "¿Tu deporte incluye una red que divide la cancha? (s/n): ";
                    std::cin >> respuesta;

                    if (respuesta == "s") {
                        std::cout << "¿Tu deporte tiene la red al nivel del suelo?\n";
                        std::cin >> respuesta;
                        if (respuesta == "s") {
                            std::cout << "Tu deporte es Tenis\n";
                        }
                        else {
                            std::cout << " Tu deporte es Volleyball\n";
                        }
                           
                    }
                    
                }
            }
            else {
                std::cout << "¿Tu deporte es por equipos pero por turnos? (s/n): ";
                std::cin >> respuesta;

                if (respuesta == "s") {
                    std::cout << "¿Tu deporte ocupa bates?\n";
                    std::cin >> respuesta;
                    if (respuesta == "s") {
                        std::cout << "Tu deporte es beisbol\n";
                    }
                }  
  
            }
        }
        else {

            std::cout << "¿Se juega con un balón ovalado? (s/n): ";
            std::cin >> respuesta;

            if (respuesta == "s") {
                std::cout << "¿Tu deporte es muy popular en estados unidos?\n";
                std::cin >> respuesta;
                if (respuesta == "s") {
                    std::cout << "Tu deporte es futbol americano\n";
                }
                else {
                    std::cout << "Tu deporte es rugby\n";
                }
                
            }
            else {
                std::cout << "El juego que estas pensando no esta en las opciones\n";
            }
        }

        std::cout << "¿Quieres jugar de nuevo? 1. Si      0. No ";
        std::cin >> repetir;
        system("cls");

    }
    return 0;

}