cmake_minimum_required(VERSION 3.29)
project(Examen_Parcial_Edjang_Ada)

set(CMAKE_CXX_STANDARD 14)

include_directories("Ejercicio 1")
include_directories("Ejercicio 2")
include_directories("Ejercicio 3")
include_directories("Ejercicio 4")

add_executable(Examen_Parcial_Edjang_Ada
    "Ejercicio 1/signo.cpp"
    "Ejercicio 1/signo.h"
    "Ejercicio 2/dia.cpp"
    "Ejercicio 2/dia.h"
    "Ejercicio 3/calificaciones.cpp"
    "Ejercicio 3/calificaciones.h"
    "Ejercicio 4/promocion.cpp"
    "Ejercicio 4/promocion.h"
    main.cpp)
