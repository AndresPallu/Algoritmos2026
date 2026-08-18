#include <iostream>

unsigned Leer(std::istream& istream); //Recibe un flujo de entrada

int main(){
    std::cout << Leer(std::cin);
}

unsigned Leer(std::istream& istream){
    
    unsigned x;
    istream >> x;
    
return x;
}
