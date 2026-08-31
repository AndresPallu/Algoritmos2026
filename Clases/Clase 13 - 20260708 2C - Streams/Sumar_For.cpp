#include <iostream>

unsigned Sumar(std::istream& in);
unsigned suma {}; //Inicializo la variable en 0. Su alcance es todo el programa.

int main(){ //Objetivo: sumar una serie de números

    std::cout << Sumar(std::cin);
}

unsigned Sumar(std::istream& in){ //No debo agregar otro parámetro ya que queda leyendo siempre
    
    for(int i{} ; i<5 ; i++){
        unsigned x;
        in >> x;
        suma += x;
    }
return suma;
}
