//
// Created by 34601 on 05/11/2024.
//
#include "promocion.h"

float calcularTotal(float precio1, float precio2, float precio3) {

    if (precio1 > precio2 && precio1 > precio3) {

        if (precio2 > precio3) {
            return precio1 + precio2;
        } else {
            return precio1 + precio3;
        }
    } else if (precio2 > precio1 && precio2 > precio3) {

        if (precio1 > precio3) {
            return precio2 + precio1;
        } else {
            return precio2 + precio3;
        }
    } else {

        if (precio1 > precio2) {
            return precio3 + precio1;
        } else {
            return precio3 + precio2;
        }
    }
}

