#include <iostream>

unsigned Sumar(std::istream& in); //Recibe un flujo de entrada

int main(){
    std::cout << Sumar(std::cin);
}

unsigned Sumar(std::istream& in){ //No debo agregar otro parámetro ya que queda leyendo siempre
    
    unsigned x, y;
    in >> x;
    in >> y;

return x + y;
}

