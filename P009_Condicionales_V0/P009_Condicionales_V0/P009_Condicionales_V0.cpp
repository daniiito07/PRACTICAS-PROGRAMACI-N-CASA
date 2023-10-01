// P009_Condicionales_V0.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Daniel Reyes C.
// Se realizará una calculadora que pueda realizar operaciones y aparte dar que numero es mayor que, junto con el valor abosulto

#include <iostream>
#include <locale>
#include <string>
#include <math.h>
int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int num1, num2;
    int operador;

    std::cout << "Hola, bienveindo a la calculadora!\n";
    std::cout << "A continuación podrás realizar varias operaaciones :D\n";

    std::cout << "Ingresa tu primer número, por favor\n";
    std::cin >> num1;

    std::cout << "Si seleccionas potencia, el primer número se elevará a la potencia que indiques en el segundo\n";
    std::cout << "Ingrese un operador (1.- +, 2.- -, 3.- * ,4- /,5- ^,):\n";
    std::cin >> operador;

    std::cout << "Ingrese el segundo número\n";
    std::cin >> num2;

    int resultado;
    switch (operador)
    {

    case 1:
        resultado = num1 + num2;

        std::cout << "El resultado de la suma es " << resultado << std::endl;
        break;
    case 2:
        resultado = num1 - num2;
        std::cout << "El resultado de la resta es " << resultado << std::endl;
        break;
    case 3:
        resultado = num1 * num2;
        std::cout << "El resultado de la multiplacion es " << resultado << std::endl;
        break;
    case 4:
        resultado = num1 / num2;
        std::cout << "El resultado de la division es " << resultado << std::endl;
        break;
    case 5:
        resultado = pow(num1,num2);
        std::cout << "El resultado de la potencia es " << resultado << std::endl;
        break;
    default:
        std::cout << "Operador invalido\n";
        return 1;
    }
    float numero;
    std::cout << "Muy bien, ahora te diré el valor absoluto de cualquier número que pongas\n";

    std::cin >> numero;

    if (numero >= 0)
    {
        std::cout << "Calculando..., el valor absoluto es: " << numero << std::endl;

    }
    else
    {
    
    }
    std::cout << "Ahora, me darás dos numeros y te diré cual de los dos es mayor o menor\n";
    std::cout << "NOTA: Los numeros los expresaré en A y B, para que así pongas atención :D\n";
    int a, b;
    a = 0, b = 0;
    std::cout << "Dame el primer numero (A)\n";
    std::cin >> a;

    std::cout << "Muy bien dame el segundo numero (B)\n";
    std::cin >> b;

    if (a > b)
        std::cout << "A es mayor";
    {
        if (b > a)
            std::cout << "B es mayor";
    }

}
