#include<iostream>
#include<array>

//si quisiera que funcione para cualquier tamañao tendría que poner:
//template <std::size_t N>
//void leerArrayGenericoSeguro(const std::array<int, N>& arr)
void leerArraySeguro(const std::array<int, 5>& arr) {
    std::cout << arr.at(0);
    // arr.at(0) = 99; //Error: es de solo lectura
}

int main(){

int numero = 42;
int* ptr = &numero; // ptr guarda la dirección de 'numero' (ej. 0x3e8 o 1000)

std::cout << ptr << "\n";   // Imprime la dirección (ej. 0x3e8 o 1000)
std::cout << *ptr;  // Imprime 42 (desreferencia)

}