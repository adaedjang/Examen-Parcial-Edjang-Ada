//
// Created by 34601 on 05/11/2024.
//
#include <iostream>
#include "dia.h"

void imprimirDiaSemana(int numero) {
    switch (numero) {
    case 1:
        std::cout << "Lunes" << std::endl;
        break;
    case 2:
        std::cout << "Martes" << std::endl;
        break;
    case 3:
        std::cout << "Miércoles" << std::endl;
        break;
    case 4:
        std::cout << "Jueves" << std::endl;
        break;
    case 5:
        std::cout << "Viernes" << std::endl;
        break;
    case 6:
        std::cout << "Sábado" << std::endl;
        break;
    case 7:
        std::cout << "Domingo" << std::endl;
        break;
    default:
        std::cout << "Número inválido. Por favor, ingresa un número del 1 al 7." << std::endl;
    }
}

