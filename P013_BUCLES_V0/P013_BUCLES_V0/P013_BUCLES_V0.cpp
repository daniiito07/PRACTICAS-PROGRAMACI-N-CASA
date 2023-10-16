// P013_BUCLES_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes C.
// Realizar un log in que se repita sin importar si los datos son correctos o incorrectos :D

#include <iostream>
#include <locale>
#include <string>

int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");

    std::string usuario;
    std::string contrasena;

    std::cout << "             Ingresa tu usuario y contraseña\n";
    do
    {
        std::cout << "                    Usuario: \n";
        std::cin >> usuario;

        std::cout << "                   Contraseña: \n";
        std::cin >> contrasena;

        if (usuario == "daniiito07")
        {
            if (contrasena == "123456")
            {

                std::cout << "         Bienvenido de nuevo :D\n  ";

            }
            else
            {

                std::cout << "   Intentalo nuevamente, el usuario o contraseña es incorrecto\n         ";

            }
        }
        else
        {

            std::cout << "      Intentalo nuevamente, el usuario o contraseña es incorrecto\n         ";

        }
    } while (true);

}