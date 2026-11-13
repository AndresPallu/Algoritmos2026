/*
	Agregar : Lista x Z --> Lista
	GetLongitud : Lista --> N
	GetComoCSV : Lista --> Σ*

*/
#include<cassert>
#include<string>
#include<array>

struct Nodo{
    int valor;
    Nodo* siguiente{nullptr};
};

struct ListaContigua{
	std::array<int, 1000> a;
	unsigned n{0}; //ocupación
};

struct ListaEnlazada{
    Nodo* elPrimero {nullptr}; //Porque al principio no apunta a nada
};

using Lista = ListaEnlazada; 

std::string GetComoCSV (const Lista&);
unsigned GetLongitud(const Lista&);
void Agregar(Lista&, int);


int main(){
    Lista l;
	assert( GetLongitud(l) == 0) ;
	assert( GetComoCSV(l) == "");
	
	Agregar(l,42);
	assert( GetLongitud(l) == 1  ) ;
	assert( GetComoCSV(l) == "42," );

	Agregar(l,21);
	assert( GetLongitud(l) == 2  ) ;
	assert( GetComoCSV(l) == "21,42,");
	
	Agregar(l,18);
	assert( GetLongitud(l) == 3  ) ;
	assert( GetComoCSV(l) =="18,21,42,");

/*
	assert( l.elPrimero == nullptr ) ; //Precondiciones
	assert(GetComoCSV(l)=="");
	
	Agregar(l,42);
	assert( l.elPrimero != nullptr ) ;
	assert( (*l.elPrimero).valor == 42) ; //postcondiciones  elPrimero->valor
	assert( (*l.elPrimero).siguiente == nullptr) ;
	assert(GetComoCSV(l)=="42,");
	Agregar(l,21);
	assert(GetComoCSV(l)=="21,42,");
	Agregar(l,18);
	assert(GetComoCSV(l)=="18,21,42,");
    */
}

void Agregar(ListaEnlazada& l, int i){ //Se reserva memoria con new a medida que agregamos, para guardar el valor y el puntero
    Nodo* unNodo = new Nodo;           //creo una nueva reserva en memoria  apra Nodo. El resultado es un puntero a unNodo
    unNodo->valor = i;                  //su valor lo inicializamos en i
    unNodo->siguiente = l.elPrimero;    //su puntero lo apuntamos a lo que era el primero
    l.elPrimero = unNodo;
}//La variable unNodo está en stack y dura lo que dura Agregar, pero la reserva supera el tiepo de espera.

unsigned GetLongitud (const Lista& l){
    unsigned n{};
    
    for(Nodo* p{l.elPrimero}; p != nullptr; p=(*p).siguiente )
        n++;
        return n;
}


std::string GetComoCSV (const Lista& l){
    std::string s{};
    
    for(Nodo* p{l.elPrimero}; p!= nullptr; p=(*p).siguiente ) //m012000 aprox
        s+=std::to_string((*p).valor) + ","; // a medida que pasa va guardando el número como string y agrega el separador

        return s;
    
}
/*Agrego el 42 apuntando al primer elemento. Luego el puntero lo muevo a 42
l.elPrimero --->   77 --> 88 --> 99 /
                   ^
                   |
                   42

l.elPrimero    77 --> 88 --> 99 /
        |       ^
        |       |
        +--->  42

l.elPrimero ---> 42 /
*/