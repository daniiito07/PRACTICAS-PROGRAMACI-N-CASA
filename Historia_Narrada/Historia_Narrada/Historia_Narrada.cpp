#include <iostream>
#include <string>
#include <locale.h>
void pausa() {
    std::cout << "\nPresiona Enter para continuar...";
    std::cin.ignore();
    std::cin.get();
}

int main() 
{
    setlocale(LC_ALL, "Es_Mx.UTF-8");
    bool repetir = true;

    while (repetir)
    {
    std::cout << "Bienvenido a la historia interactiva.\n";
    std::cout << "**********************************************************************************\n";
    std::cout << "*   Es importante que escribas tu decisión tal cual aparece en las opciones :D   *\n";
    std::cout << "**********************************************************************************\n";
    std::cout << "Por favor, ingresa tu nombre: ";
    std::string nombre;
    std::getline(std::cin, nombre);

    std::cout << "\nHola, " << nombre << ". Estás a punto de embarcarte en una emocionante aventura llamada -- LAS LEYENDAS DEL ABUELO -- .\n";
    pausa();

    std::cout << "---------- El comienzo ----------\n";
    std::cout << "Te encuentras en un cruce de caminos, mientras estabas siguiendo el mapa que te dejó tu abuelo,\n";
    std::cout << "el camino de la izquierda se ve un poco más peligroso, mientras que el de la derecha se nota menos peligroso, pero un poco abandonado. ¿Tomarás el camino de la izquierda o el de la derecha? (Izquierda/Derecha):\n ";
    std::string decision1;
    std::getline(std::cin, decision1);

    if (decision1 == "Izquierda") {
        std::cout << "Avanzas por el camino de la izquierda y te encuentras con un río muy agitado.\n";
        pausa();

        std::cout << "---------- El río ----------";
        std::cout << "¿Intentarás cruzar el río nadando o buscarás un puente? (Nadar/Puente): ";

        std::string decision2;
        std::getline(std::cin, decision2);

        if (decision2 == "Nadar") {
            std::cout << "Empezaste a nadar con toda tu energía, fue complicado y por momentos parecía que no lo ibas a lograr, pero lograste pasar\n";
            pausa();

            std::cout << "---------- La Cueva ----------\n";
            std::cout << "Al otro lado del río, econtraste una cueva muy oscura ¿Entras a la cueva o sigues tu camino evitando la cueva? (Entrar/Seguir): ";

            std::string decision3;
            std::getline(std::cin, decision3);

            if (decision3 == "Entrar") {
                std::cout << "Dentro de la cueva luchas contra algunos mounstruos, para que al final uno de ellos te soltara un pergamino y que tu abuelo dejo un tesoro escondido para ti, para recompensar tu valentía :D\n";
            }
            else if (decision3 == "Seguir") {
                std::cout << "Continuas tu camino en busca de lo prometido en el mapa de tu abuelo, pero al final solo llega al camino de vuelta al pueblo, lamentablemente al no arriesgarte, perdiste el tesoro que dejó tu abuelo ):\n";
            }
            else {
                std::cout << "\nDecisión no válida. Has fallado en tu aventura.\n";
            }
        }
        else if (decision2 == "Puente") {
            std::cout << "\nEncuentras un puente para cruzar, pero te das cuenta que en el camino de buscarlo, te alejaste demasiado, pero logras cruzar sano y salvo\n";
            pausa();

            std::cout << "---------- El Bosque Oscuro ----------\n";
            std::cout << "Seguiste caminado y te encuentras ahora a las orillas del bosque osucro del pueblo, ese del que todo mundo te advierte. ¿Decides explorar por dentro el bosque o simplemente lo rodeas? (Explorar/Rodear): ";

            std::string decision3;
            std::getline(std::cin, decision3);

            if (decision3 == "Explorar") {
                std::cout << "Te aventuras en el bosque y encontraste muchas flores y animales que jamás habías visto, no encontraste lo que te prometio tu abuelo, pero tuviste una aventura emocionante.\n";
            }
            else if (decision3 == "Rodear") {
                std::cout << "Decides rodear el bosque y evitaste el peligro del que todo mundo te hablaba, solo para llegar al puebla por un camino que llevaba años cerrado. LLEGASTE SANO A CASA :D.\n";
            }
            else {
                std::cout << "\nDecisión no válida. Has fallado en tu aventura.\n";
            }
        }
        else {
            std::cout << "\nDecisión no válida. Has fallado en tu aventura.\n";
        }
    }
    else if (decision1 == "Derecha") {
        std::cout << "Eliges ir por el camino de la derecha y te encuentras un bosque oscuro.\n";
        pausa();

        std::cout << "---------- El bosque ----------\n";
        std::cout << "¿Te adentrarás en el bosque en busca del tesoro prometido por tu abuelo o retrocederás? (Explorar/Retroceder):\n";

        std::string decision2;
        std::getline(std::cin, decision2);

        if (decision2 == "Explorar") {
            std::cout << "Te aventuraste en el bosque y te das cuenta que aquellos peligros que siempre te advirtio el pueblo siempre fueron reales y encontraste un tesoro, pero te das cuenta que aun hay más \n";
            pausa();

            std::cout << "---------- La Torre Encantada ---------- \n";
            std::cout << "Encuentras una torre encantada. ¿Subes a la torre o continuarás tu camino? (Subir/Continuar): ";

            std::string decision3;
            std::getline(std::cin, decision3);

            if (decision3 == "Subir") {
                std::cout << "Al subir la torre, descubres una fuente mágica que concede deseos y por fin todas las leyendas del pueblo toman sentido, siempre tuvo razón tu abuelo y decides que tu deseo es una protección eterna para guarda todo lo maravilloso del pueblo :D!!!\n";
            }
            else if (decision3 == "Continuar") {
                std::cout << "Decisdiste continuar sin subir a la torre, aunque en el fondo sabes que te perdiste de algo único, decidiste llegar sano a casa\n";
            }
            else {
                std::cout << "\nDecisión no válida. Has fallado en tu aventura.\n";
            }
        }
        else if (decision2 == "Retroceder") {
            std::cout << "\nDecidiste retroceder y tomar el otro camino. Lamentablemente, te perdiste una gran aventura.\n";
        }
        else {
            std::cout << "\nDecisión no válida. Has fallado en tu aventura.\n";
        }
    }
    else {
        std::cout << "\nDecisión no válida. Has fallado en tu aventura.\n";
    }

    std::cout << "\nGracias por jugar, " << nombre << ". ¡Espero que hayas disfrutado esta pequeña historia!\n";

    std::cout << "¿Quieres tomar un camino distinto en la historia?\n";
    std::cout << "1. Si\n";
    std::cout << "0. No\n";
    std::cin >> repetir;
    }
   
    return 0;
}
