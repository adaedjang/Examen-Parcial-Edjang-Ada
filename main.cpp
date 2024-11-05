//
// Created by 34601 on 05/11/2024.
//
#include <iostream>
#include "signo.h"
#include "dia.h"
#include "calificaciones.h"
#include "promocion.h"

int main() {
    int opcion;

    std::cout << "Seleccione el ejercicio que desea ejecutar:" << std::endl;
    std::cout << "1. Identificación de Número Positivo, Negativo o Cero" << std::endl;
    std::cout << "2. Día de la Semana" << std::endl;
    std::cout << "3. Cálculo de Promedio de Calificaciones" << std::endl;
    std::cout << "4. Promoción de '3 por 2' en Tienda" << std::endl;
    std::cout << "Opción: ";
    std::cin >> opcion;

    switch (opcion) {
        case 1: {
            int numero;
            std::cout << "Ingresa un número entero: ";
            std::cin >> numero;
            verificarSigno(numero);
            break;
        }
        case 2: {
            int dia;
            std::cout << "Ingresa un número del 1 al 7: ";
            std::cin >> dia;
            imprimirDiaSemana(dia);
            break;
        }
        case 3: {
            const int CANTIDAD_CALIFICACIONES = 8;
            float calificaciones[CANTIDAD_CALIFICACIONES];

            std::cout << "Ingresa las calificaciones de los 8 ejercicios (entre 0 y 10):" << std::endl;
            for (int i = 0; i < CANTIDAD_CALIFICACIONES; ++i) {
                std::cout << "Calificación " << (i + 1) << ": ";
                std::cin >> calificaciones[i];
            }

            float promedio = calcularPromedio(calificaciones, CANTIDAD_CALIFICACIONES);
            std::cout << "El promedio de las calificaciones es: " << promedio << std::endl;
            break;
        }
        case 4: {
            float precio1, precio2, precio3;
            std::cout << "Ingresa el precio del primer artículo: ";
            std::cin >> precio1;
            std::cout << "Ingresa el precio del segundo artículo: ";
            std::cin >> precio2;
            std::cout << "Ingresa el precio del tercer artículo: ";
            std::cin >> precio3;

            float total = calcularTotal(precio1, precio2, precio3);
            std::cout << "El total a pagar es: " << total << std::endl;
            break;
        }
        default:
            std::cout << "Opción inválida." << std::endl;
            break;
    }

    return 0;
}

