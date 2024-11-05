//
// Created by 34601 on 05/11/2024.
//
#include "signo.h"
#include <iostream>

void verificarSigno(int numero) {
    if (numero > 0) {
        std::cout << "El número es positivo" << std::endl;
    } else if (numero < 0) {
        std::cout << "El número es negativo" << std::endl;
    } else {
        std::cout << "El número es cero" << std::endl;
    }
}

