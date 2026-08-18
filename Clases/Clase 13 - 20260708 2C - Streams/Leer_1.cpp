#include <iostream>

unsigned Leer(std::istream& istream); //Recibe un flujo de entrada

int main(){
    std::cout << Leer(std::cin);
}

unsigned Leer(std::istream& istream){
    
    unsigned x; //Declaro una variable que tomará el valor que extraemos. No vale la pena inicializar porque enseguida la sobreescribimos
    istream >> x;
    
return x;
}

