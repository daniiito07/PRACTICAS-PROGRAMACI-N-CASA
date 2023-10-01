// P007_Decisiones_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes C.
// En esta práctica haremos un sistema para que nos arroje las rondas a pelear, de acuerdo a los luchadores que tengamos disponibles 

#include <iostream>
#include <string>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    bool numero_peleadores;
    int tipo_pelea;




    std::cout << "Bienvenido al evento pricipal de esta noche!\n";
    std::cout << "Elige el número de luchadores\n";
    std::cout << "1.- 8 peleadores    0.- 12 peleadores\n";
    std::cin >> numero_peleadores;

    if (numero_peleadores == true)
    {
        std::cout << "Serán 8 peleadores esta noche!\n";
        std::cout << "Ahora dime ¿Qué tipo de combate te gustaria para esta noche?\n";
        std::cout << "1.- Royal rumble  2.- Eliminatoria directa  3.- Grupos, semifinal y final\n";
        std::cin >> tipo_pelea;

        switch (tipo_pelea)
        {

        case 1:
            std::cout << " Elegiste Royal Rumble";
            std::cout << " Aqui solo hay una ronda en la que irán saliendo cada determinado tiempo, TODOS VS TODOS, El ultimo en pie ganará ";
            break;


        case 2:
            std::cout << "Elegiste Eliminacion directa";
            std::cout << "En la primera jornada habran 4 combates de 1v1, despues el ganador de cada combate juega vs el ganador de la otra jornada y quedarian 4 peleadores\n";
            std::cout << "y en la segunda jornada se haran dos combates de 1v1, depues el ganador de cada combate pelearan entre si en la 3 jornada de un solo combate  de 1v1 ";
            break;


        case 3:
            std::cout << "Elegiste Grupos, semifinal y final";
            std::cout << "En la fase de grupos se haran 2 grupos de 4 y se haran 3 jornadas osea cada peleador tendra 3 combates\n";
            std::cout << "y solo pasan los 2 mejores peleadores de cada grupo a la siguiente fase que es la semifinal\n";
            std::cout << "cada peleador ganador de la semifinal peleara en la final, y el ganador de la final sera el completo GANADOR\n";
        default:
            std::cout << "Elige bien la opcion\n";

        }





    }
    else
    {
        std::cout << "Serán 12 peleadores esta noche!\n";
        std::cout << "Ahora dime ¿Qué tipo de combate te gustaria para esta noche?\n";
        std::cout << "1.- Royal rumble  2.- Eliminatoria directa  3.- Grupos, semifinal y final\n";
        std::cin >> tipo_pelea;

        switch (tipo_pelea)
        {
        case 1:
            std::cout << "Escojisto Royal rumble";
            std::cout << "Aqui solo hay una ronda en la que irán saliendo cada determinado tiempo, TODOS VS TODOS, El ultimo en pie ganará\n";
            break;

        case 2:
            std::cout << "Escojiste Eliminatoria directa\n";
            std::cout << "En la primera jornada habran 6 combates de 1v1, depues el ganador de cada combate juega vs el ganador de la otra jornada y quedarian 6 peleadores\n";
            std::cout << "y en la segunda jornada se haran 3 combates de 1v1 y quedarian 3 peleadores y en la 4 jornada se hara un combate de 1v1v1 y el gandor sera el ABSOLUTO CAMPEON\n ";
            break;

        case 3:
            std::cout << "Elegiste Grupos, semifinal y final";
            std::cout << "En la fase de grupos se haran 4 grupos de 3 y se hara 2 jornadas cada peleador\n";
            std::cout << "y solo pasa el mejor peleador de cada grupo a la siguiente fase que es la semifinal\n";
            std::cout << "cada peleador ganador de la semifinal peleara en la final, y el ganador de la final sera el completo GANADOR\n";

        }



    }


}