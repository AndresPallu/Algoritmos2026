#include <iostream>
#include <cassert>
#include <array>


enum struct Direccion { Arriba, Abajo, Derecha, Izquierda, Atras, Adelante };
enum struct Turno { Mañana, Tarde, Noche };

struct Punto { double x; double y; };

int main() {

//Sobre la seguridad de tipos:
Direccion t { Direccion::Arriba }; // Definición correcta
t = Direccion::Atras;              // Asignación válida, es del mismo tipo
// t = Turno::Noche;               // ERROR DE COMPILACIÓN: Si hubiera usado solo enum sin struct para crearlos
//el compilador dejaría hacer t = Turno::Noche; porque internamente diría: "Noche vale 2, le asigno un 2 a la variable t".

assert(0 == static_cast<int>(Direccion::Arriba));


Punto p; // Defino una variable de tipo Punto
p.x = 1.0; 
p.y = 5.0;

//En lugar de escribir std::array<Punto, 5> todo el tiempo, creo un alias:
using Pentagono = std::array<Punto, 5>;
// Inicialización
Pentagono pentagonoAprobador = {{{1,1}, {2,2}, {3,3}, {4,4}, {5,5}}};
// Acceso al componente 'x' del primer punto (índice 0):
assert(1 == pentagonoAprobador.at(0).x);

}