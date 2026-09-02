#include <iostream>

void Suma(std::istream& in, unsigned &v0, unsigned &v1, unsigned &v2);

int main(){
    unsigned int v0={}, v1={}, v2 ={};

    Suma(std::cin, v0, v1, v2);

    std::cout << "Vendedor 0: $"<< v0 << "\n";
    std::cout << "Vendedor 1: $"<< v1 << "\n";
    std::cout << "Vendedor 2: $"<< v2 << "\n";
}

void Suma(std::istream& in, unsigned &v0, unsigned &v1, unsigned &v2){    
    std::cout << "Ingrese ventas en formato 'Vendedor Importe': \n";

    for(unsigned vendedor, importe ; in >> vendedor >> importe ; )
        if (vendedor == 0){
            v0 +=importe;
        } else if (vendedor == 1){
            v1 +=importe;
        } else {
            v2 +=importe;
        }
}