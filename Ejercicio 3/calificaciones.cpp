//
// Created by 34601 on 05/11/2024.
//
#include "calificaciones.h"

float calcularPromedio(float calificaciones[], int cantidad) {
    float suma = 0.0;

    // Sumar las calificaciones
    for (int i = 0; i < cantidad; ++i) {
        suma += calificaciones[i];
    }

    // Calcular y retornar el promedio
    return suma / cantidad;
}

