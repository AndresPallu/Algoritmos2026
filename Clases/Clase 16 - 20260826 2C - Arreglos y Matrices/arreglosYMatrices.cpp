#include <iostream>
#include <array>


void mostrarArrayDeVentas(const std::array<std::array<std::array<unsigned, 12>, 3>, 4>& matriz) {
    
    // Dimensión 1: El arreglo principal de 4 elementos (regiones)
    for (unsigned i = 0; i < 4; ++i) {
        std::cout << "Bloque " << i << ":\n";
        
        // Dimensión 2: El arreglo intermedio de 3 elementos (vendedores)
        for (unsigned j = 0; j < 3; ++j) {
            
            // Dimensión 3: El arreglo interno de 12 elementos (meses)
            for (unsigned k = 0; k < 12; ++k) {
                // Acceso seguro encadenando .at()
                std::cout << matriz.at(i).at(j).at(k) << " ";
            }
            std::cout << "\n";
        }
    }
}

int main() {

//Llenar tres arreglos:
//1-En inicialización: asigno los valores en el momento exacto de declarlo
std::array<int, 5> arregloCompleto = {10, 20, 30, 40, 50};
std::array<int, 5> arregloParcial = {10, 20}; // Queda en: 10, 20, 0, 0, 0
std::array<int, 5> arregloCeros = {};         // Queda en: 0, 0, 0, 0, 0

//2-Asignación manual por índice: asigno los valores en el momento exacto de declarlo
std::array<int, 5> superArreglo; // Contiene basura de memoria temporalmente
superArreglo.at(0) = 8;         // Escribe en el la posición 0
superArreglo.at(1) = 10;        // Escribe en el la posición 1

//3-Lleno el arreglo usando una variable iteradora:
std::array<unsigned, 5> superArreglo2;
for (unsigned i = 0; i < superArreglo2.size(); ++i) {
    superArreglo2.at(i) = (i + 1) * 10; 
}

//Llenado de una matriz:
//1-En inicialización: asigno los valores en el momento exacto de declarla
std::array<std::array<unsigned, 3>, 2> matrizCompleta = {{
    {1, 2, 3}, // Fila 0
    {4, 5, 6}  // Fila 1
}};
std::array<std::array<unsigned, 3>, 2> matrizCeros = {}; //Inicializada en ceros
//2-Asignación Manual por Índice: Se requiere encadenar .at() por cada dimensión de la matriz para llegar a la dirección de memoria final.
std::array<std::array<unsigned, 3>, 2> laGranMatriz = {};
laGranMatriz.at(0).at(2) = 15; // Escribe en la Fila 0, Columna 2
laGranMatriz.at(1).at(0) = 25; // Escribe en la Fila 1, Columna 0

//3-Anidando for, uno por dimensión. Va de afuera (filas) hacea adentro (columnas)
std::array<std::array<unsigned, 3>, 2> vamosAlgortimos;
for (unsigned i = 0; i < vamosAlgortimos.size(); ++i) {           // Recorre el arreglo principal
    for (unsigned j = 0; j < vamosAlgortimos.at(i).size(); ++j) { // Recorre los sub-arreglos
        vamosAlgortimos.at(i).at(j) = (i * 10) + j; 
    }
}
///////////////////

std::array<std::array<std::array<unsigned, 12>, 3>, 4> arrayVentas = {};
//Las {} así son porque lo inicializo todo en cero

arrayVentas.at(1).at(2).at(1) = 1;
arrayVentas.at(1).at(2).at(2) = 11;
arrayVentas.at(1).at(1).at(1) = 111;
arrayVentas.at(2).at(0).at(8) = 1111;
arrayVentas.at(0).at(0).at(5) = 11111;
arrayVentas.at(1).at(1).at(5) = 111111;

mostrarArrayDeVentas(arrayVentas);
}

//std::array<std::array<unsigned, 12>, 3> ventasPorVendedor;