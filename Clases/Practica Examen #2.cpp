#include <iostream>
#include <cassert>
#include <array>
#include <cstddef> //Para poder usar std::size_t

/*
El tamaño de un std::array se define en tiempo de compilación y forma parte de su tipo de dato, 
por eso no puedo pasar N como dat. Uso una plantilla que le dice al compilador que genere automáticamente
la función para el tamaño exacto de la matriz que le pase

Plantilla: es un "molde" que instruye al compilador cómo generar múltiples versiones de una misma función
basándose en el tipo de dato o tamaño exacto que el programa necesite en tiempo de compilación.
*/

template <std::size_t N> //Aplica única y exclusivamente a la función o estructura que tiene inmediatamente debajo
int sumarValoresMatriz (const std::array<std::array<int, N>, N>& unaMatrizDePresente);
template <std::size_t N> //Hay que escribirlo antes de cada función, no basta declararlo una sola vez
int sumarDiagonal (const std::array<std::array<int, N>, N>& unaMatrizDePresente);

int main(){
    std::array<std::array<int, 2>, 2> estuvePresente = {{{2,2},{2,2}}};

    assert (sumarValoresMatriz(estuvePresente) == 8);
    assert (sumarDiagonal(estuvePresente) == 4);
}

template <std::size_t N>
int sumarValoresMatriz (const std::array<std::array<int, N>, N>& unaMatrizDePresente){
    int suma = 0;
    for (size_t fila = 0; fila < N; ++fila) {
        for (size_t columna = 0; columna < N; ++columna) {
            suma = suma + unaMatrizDePresente.at(fila).at(columna);
        }
    }
return suma;
}

template <std::size_t N>
int sumarDiagonal  (const std::array<std::array<int, N>, N>& unaMatrizDePresente){
    int suma = 0;
    for (size_t i = 0; i < N; ++i) {
            suma = suma + unaMatrizDePresente.at(i).at(i);
    }
return suma;
}