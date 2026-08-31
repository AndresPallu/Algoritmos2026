#include <iostream>

unsigned Suma(std::istream& in); //Recibe un flujo de entrada

int main(){

    std::cout << Suma(std::cin);

    //unsigned resultado = Suma(std::cin);
    //std::cout << "Resultado suma: "<< resultado;
}

unsigned Suma(std::istream& in){    
    unsigned S{};

    std::cout << "Ingrese numeros: ";

    for(unsigned x ; in >> x ; )
        S += x;
    
return S;
}

//No guardar el resultado? Que Suma muestre el mensaje o main?