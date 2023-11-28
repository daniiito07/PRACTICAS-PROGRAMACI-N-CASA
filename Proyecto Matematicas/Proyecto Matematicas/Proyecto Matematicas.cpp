// BATALLA DE ENANOS
// DANIEL REYES C
// TEMA UTILIZADO: PROBABILIDAD

#include <iostream>
#include <string>
#include <ctime> // Utilizada para operaciones con tiempo
#include <cstdlib> // Incluye funciones para generar números aleatorios mediante la función rand().
#include <locale.h> // Localización y manejo de configuraciones regionales. 
#include <Windows.h> // Esta biblioteca es específica de sistemas operativos Windows. Proporciona muchas funciones y definiciones necesarias para la programación en entornos Windows.

// Función para cambiar el color del fondo y el texto
void cambiarColor(int fondo, int texto) 
{
    system(("color " + std::to_string(fondo) + std::to_string(texto)).c_str()); // Me causaba problema ponerlo dentro del main, cree una función para llamarla
}                                                                               // dentro del código y ya funcionó 

int main() {
    setlocale(LC_ALL, "ES_MX.UTF-8");
    srand(time(0));
    std::string Kemonito = "Kemonito ";
    std::string Margarito = "Margarito";

    bool continuar = true;
    int ataquesExitosos = 0;
    int ataquesFallidos = 0;

    // Cambiar el color del fondo a blanco (código 7) y el color del texto a negro (código 0)
    cambiarColor(7, 0);

    while (continuar) {
        int saludUsuario, saludContrincante;

        // El usuario elige su Pokémon
        std::cout << "╔═══════════════════════════════════════════╗\n";
        std::cout << "║             Elige a tu Enano:             ║\n";
        std::cout << "║             1. " << Kemonito << "                  ║\n";
        std::cout << "║             2. " << Margarito << "                  ║\n";
        std::cout << "╚═══════════════════════════════════════════╝\n";
        int opcionEnano;
        std::cin >> opcionEnano;

        std::string tuEnano, contrincanteEnano;

        if (opcionEnano == 1) 
        {
            tuEnano = Kemonito;
            contrincanteEnano = Margarito;
        }
        else 
            if (opcionEnano == 2) 
            {
            tuEnano = Margarito;
            contrincanteEnano = Kemonito;
            }
        else 
        {
            std::cout << "Opción inválida. Saliendo del programa.\n";
            return 1;
        }

        saludUsuario = saludContrincante = 100;

        while (saludUsuario > 0 && saludContrincante > 0) {
            std::cout << "╔═══════════════════════════════════════════════════════════════════╗\n";
            std::cout << "║   Es tu turno, entrenador de " << tuEnano << ". Elige una opción:         ║\n";
            std::cout << "║                         1. Atacar                                 ║\n";
            std::cout << "║                         2. Esquivar                               ║\n";
            std::cout << "║                         3. Huir                                   ║\n";
            std::cout << "╚═══════════════════════════════════════════════════════════════════╝\n";
            int opcion;
            std::cin >> opcion;

            int ataqueUsuario = 0;                 // DOUBLE: Permite numeros con decimales más precisos, aunque también ocupa mas memoria que un float
            double probabilidadExitoAtaque = 0.7; // Variable para la probabilidad de acertar el ataque 
            double probabilidadEsquivar = 0.5;  // Variable para la probabilidad de esquivar

            switch (opcion) // Activa los distintos casos de la pelea (atacar,esquivar y huir)
            {
            case 1:
                if ((rand() % 100) < probabilidadExitoAtaque * 100) // Si el número aleatorio es menor que la probabilidad multiplicada por 100, el ataque se considera exitoso
                {
                    ataqueUsuario = rand() % 25 + 1;
                    std::cout << "┌────────────────────────────────────────────────────────────────────────────────┐\n";
                    std::cout << "                        Atacas a " << contrincanteEnano << " por " << ataqueUsuario << " puntos de daño." << std::endl;
                    std::cout << "└────────────────────────────────────────────────────────────────────────────────┘\n";
                    saludContrincante -= ataqueUsuario;
                    ataquesExitosos++;
                }
                else {
                    std::cout << "┌────────────────────────────────────────────────────────────────────────────────┐\n";
                    std::cout << "                               Tu ataque ha fallado." << std::endl;
                    std::cout << "└────────────────────────────────────────────────────────────────────────────────┘\n";
                    ataquesFallidos++;
                }
                break;
            case 2:
                if ((rand() % 100) < probabilidadEsquivar * 100) {
                    std::cout << "┌────────────────────────────────────────────────────────────────────────────────┐\n";
                    std::cout << "                       Has logrado esquivar el ataque de " << contrincanteEnano << "." << std::endl;
                    std::cout << "└────────────────────────────────────────────────────────────────────────────────┘\n";
                    continue;  // El jugador no recibe daño y se juega el siguiente turno
                }
                else {
                    std::cout << "┌────────────────────────────────────────────────────────────────────────────────┐\n";
                    std::cout << "                     No pudiste esquivar el ataque de " << contrincanteEnano << "." << std::endl;
                    std::cout << "└────────────────────────────────────────────────────────────────────────────────┘\n";
                    int danoEsquivado = rand() % 20 + 1;
                    std::cout << "                     Recibes " << danoEsquivado << " puntos de daño." << std::endl;
                    saludUsuario -= danoEsquivado; // El jugador recibe daño por no esquivar y ademas la maquina tiene su turno normal
                }
                break;
            case 3:
                std::cout << "┌────────────────────────────────────────────────────────────────────────────────┐\n";
                std::cout << "                      Has decidido huir de la batalla. " << contrincanteEnano << " gana." << std::endl;
                std::cout << "└────────────────────────────────────────────────────────────────────────────────┘\n";
                return 0;
            default:
                std::cout << "Opción inválida. Elige una opción válida." << std::endl;
                continue;
            }

            if (saludContrincante <= 0)  //Si la vida de la maquina es meno o igual a 0, ganas :D
            {
                std::cout << contrincanteEnano << " ha sido derrotado. " << tuEnano << " gana!!" << std::endl;
                break;
            }

            // Ataque maquina :D
            int ataqueContrincante = rand() % 20 + 1; // Genera un número entre 1 a 19, para que con el +1 queden numeros del 1 al 20
            std::cout << "××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××\n";
            std::cout << contrincanteEnano << " ataca a " << tuEnano << " por " << ataqueContrincante << " puntos de daño." << std::endl;
            std::cout << "××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××××\n";
            saludUsuario -= ataqueContrincante;

            if (saludUsuario <= 0) {
                std::cout << tuEnano << " ha sido derrotado. " << contrincanteEnano << " gana!!" << std::endl;
                break;
            }

            // Imprimir contadores de vida
            std::cout << "----------------------------------------------------------------------------------\n";
            std::cout << "Vida de " << tuEnano << ": " << saludUsuario << " | Vida de " << contrincanteEnano << ": " << saludContrincante << std::endl;
            std::cout << "----------------------------------------------------------------------------------\n";
        }

        // Mostrar el resultado de la batalla
        std::cout << "Estadísticas de la batalla:\n";
        std::cout << "Ataques exitosos: " << ataquesExitosos << std::endl;
        std::cout << "Ataques fallidos: " << ataquesFallidos << std::endl;
        std::cout << "Probabilidad de acertar los ataques: "
            << static_cast<double>(ataquesExitosos) / (ataquesExitosos + ataquesFallidos) * 100     // STATIC_CAST: Convierte la variable ataques exitosos en un double
            << "%" << std::endl;                                                                   // EL total de ataques exitosos lo divide entre el total de ataques 
                                                                                                   // Y lo multiplica por 100 para mostrarlo en porcentaje sobre 100

        std::cout << "¿Quieres pelear de nuevo? (1 para sí, 0 para no): ";
        std::cin >> continuar;
    }

    return 0;
}
