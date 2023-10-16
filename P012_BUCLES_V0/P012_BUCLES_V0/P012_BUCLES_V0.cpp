// P012_BUCLES_WHILE_FOR_V0.cpp : 
// Daniel Reyes C.
// Realizar un contador de vida, que sean 3

#include <iostream>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "ES_MX.UTF-8");
    int i = 0;
    bool iniciar;
    bool repetir = true;
    do
    {



        std::cout << "Tenías 3 vidas y ya perdiste una, ¿Deseas continuar? (1 para si, 0 para no)\n";
        std::cin >> iniciar;
        for (i = 0; i <= 100; i = i + 1)
        {
            std::cout << "El contador va en: " << i << std::endl;
        }
        if (iniciar == true)
        {
            std::cout << "Te quedan 2 vidas, ten más cuidado\n";

            std::cout << "Te volvieron a matar,¿Deseas continuar?\n";
            std::cin >> iniciar;
            for (i = 0; i <= 100; i = i + 1)
            {
                std::cout << "El contador va en: " << i << std::endl;
            }
            if (iniciar == true)
            {
                std::cout << "Te queda una vida, Ahora si ten más cuidado D:\n";
                std::cout << "¿Deseas usar tu última vida? (1  para si ,  2  para no)\n";
                std::cin >> iniciar;
                for (i = 0; i <= 100; i = i + 1)
                {
                    std::cout << "El contador va en: " << i << std::endl;
                }
                if (iniciar == true)
                {
                    std::cout << "Te mataron, perdiste tu ultima vida D:\n";
                    std::cout << "Suerte para la próxima\n";
                }
                else
                {
                    std::cout << "Conserva bien tu ultima vida y vuelve cuando quieras :D\n";
                }
            }
            else
            {
                std::cout << "Ya habías llegado lejos :(\n";
            }

        }


        else
        {
            std::cout << "Perdiste :(\n";
        }
        system("cls");
    } while (true);
    


}