#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <locale.h>

class Pokemon {
public:
    std::string nombre;
    int puntosDeVida;
    int ataque;


    Pokemon(std::string nombre, int puntosDeVida, int ataque)
        : nombre(nombre), puntosDeVida(puntosDeVida), ataque(ataque) {}

    void recibirDanio(int danio) {
        puntosDeVida -= danio;
        if (puntosDeVida < 0) {
            puntosDeVida = 0;
        }
    }

    bool estaVivo() const {
        return puntosDeVida > 0;
    }
};
int main() {
    setlocale(LC_ALL, "ES_MX.UTF-8");
    srand(time(0));
    bool repetir;

    do
    {


        std::cout << "¡Bienvenido a la batalla Pokémon!" << std::endl;


        Pokemon jugador("Pikachu", 100, 20);
        Pokemon maquina("Haunter", 120, 25);

        std::cout << "Elige a tu Pokémon inicial:" << std::endl;
        std::cout << "1. Torchic" << std::endl;
        std::cout << "2. Treecko" << std::endl;
        std::cout << "3. Mudkip" << std::endl;

        int eleccion;
        std::cin >> eleccion;

        switch (eleccion) {
        case 1:
            jugador = Pokemon("Torchic", 100, 15);
            break;
        case 2:
            jugador = Pokemon("Treecko", 100, 18);
            break;
        case 3:
            jugador = Pokemon("Mudkip", 100, 20);
            break;
        default:
            std::cout << "Selección no válida. Pikachu se selecciona por defecto." << std::endl;
            break;
        }

        std::cout << "Comienza la batalla!" << std::endl;
        std::cout << "Jugador elige a " << jugador.nombre << std::endl;

        int turno = 1;

        while (jugador.estaVivo() && maquina.estaVivo()) {
            if (turno % 2 == 1) {
                std::cout << "Turno del jugador  " << jugador.nombre << " " << std::endl;

            }
            else {
                std::cout << "Turno de la máquina  " << maquina.nombre << " " << std::endl;

            }
            turno++;
        }

        if (jugador.estaVivo()) {
            std::cout << "¡Ganaste la batalla!" << std::endl;
        }
        else {
            std::cout << "¡La máquina ganó la batalla!" << std::endl;
        }

        std::cout << "Quieres repetir la batalla pokemon?  1.-Si 2.-No\n";
        std::cin >> repetir;

    } while (repetir);
    return 0;
}