#include <iostream>

// Paso por valor (ocupa más memoria, modifica una copia local)
void porValor(unsigned x) {
    x = 99; // Solo afecta a la copia de x en este Stack Frame
}

// Paso por referencia (ocupa menos memoria, modifica la original)
void porReferencia(unsigned& x) {
    x = 99; // Modifica la variable original directamente
}

// Paso por referencia constante (ocupa menos memoria, solo lectura)
void porReferenciaConst(const unsigned& x) {
    // x = 99; // ARROJARÍA ERROR DE COMPILACIÓN: No se puede modificar
    std::cout << "Te leo leyendo en porReferenciaConst: " << x << "\n";
}

int main() {
    unsigned superNúmero = 10;
    std::cout << "superNúmero: " << superNúmero << "\n";

    porValor(superNúmero);
    std::cout << "Paso por valor (aunque haga valor=99 no lo cambia): " << superNúmero << "\n"; // Imprime 10 (no cambió)
    
    porReferencia(superNúmero);
    std::cout <<"Como lo paso por referencia sí cambia: " << superNúmero << "\n"; // Imprime 99 (sí cambió)
    
    porReferenciaConst(superNúmero);  // Lee el 99 de forma segura
    
}