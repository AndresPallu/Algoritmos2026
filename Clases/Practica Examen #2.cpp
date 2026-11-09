#include <iostream>
#include <cassert>
#include <array>

int sumarValoresMatriz (const std::array<std::array<int, 2>, 2>& unaMatrizDePresente);
int sumarDiagonal (const std::array<std::array<int, 2>, 2>& unaMatrizDePresente);

int main(){
    std::array<std::array<int, 2>, 2> estuvePresente = {{{2,2},{2,2}}};

    assert (sumarValoresMatriz(estuvePresente) == 8);
    assert (sumarDiagonal(estuvePresente) == 4);
}

int sumarValoresMatriz (const std::array<std::array<int, 2>, 2>& unaMatrizDePresente){
    int suma = 0;
    for (int fila = 0; fila < 2; ++fila) {
        for (int columna = 0; columna < 2; ++columna) {
            suma = suma + unaMatrizDePresente.at(fila).at(columna);
        }
    }
return suma;
}

int sumarDiagonal  (const std::array<std::array<int, 2>, 2>& unaMatrizDePresente){
    int suma = 0;
    for (int i = 0; i < 2; ++i) {
            suma = suma + unaMatrizDePresente.at(i).at(i);
    }
return suma;
}