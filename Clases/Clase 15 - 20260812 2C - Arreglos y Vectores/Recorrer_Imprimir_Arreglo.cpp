#include <iostream>
#include <vector>
#include <array>

void mostrarVector(const std::vector<int>& vec) { //Lo del & lo veo clases más adelante
    for (int val : vec) {
        std::cout << val << " ";
    }
}

template <std::size_t N> //Esto es para que la función funcione para mostrar Arrays de cualquier tamaño
void mostrarArray(const std::array<int, N>& arr) {
    for (int val : arr) {
        std::cout << val << " ";
    }
}

int main() {

std::array<int, 5> arregloEstatico = {10, 20, 30, 40, 50};
    std::cout << "Muestro el std::array \n";
    mostrarArray(arregloEstatico);

std::cout << "\n";

std::vector<int> vectorDinamico = {10, 30, 60, 50};
    std::cout << "Muestro el std::vector (aunque no lo hice crecer) \n"; 
    mostrarVector(vectorDinamico);

std::cout << "\n Ahora lo muestro con otra forma de for para recorrer arreglos: ";
    for (auto e : arregloEstatico){
        std::cout << e << " ";
    }
}
