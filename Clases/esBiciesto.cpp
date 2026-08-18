#include <iostream>
#include <cassert>

bool isBiciesto(int anio);

int main(){

assert( isBiciesto(1603)); //Si le pongo el not da: Assertion failed: not isBiciesto(1603), file C:\Andres 23 09 24\UTN\Algoritmos 2026\EjerciciosGIT\EjemplosClase\esBiciesto.cpp, line 9
assert( isBiciesto(2020));
assert( isBiciesto(1900));
}

bool isBiciesto(int anio){
    
    bool b = (anio % 4 && !(anio %100)) || (anio % 400);

    return b;
}

//lldb depurador

//Para commit tras renombrar repositorio