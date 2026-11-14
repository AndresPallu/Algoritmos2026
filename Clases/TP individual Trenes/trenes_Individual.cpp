#include <iostream>
#include <string>

enum struct TipoVagon{Pasajero, Carga};
const int MAX_VAGONES_POR_LOCOMOTORA = 10;
const int CANT_MAX_LOCOMOTORAS = 2;
const int CANT_MAX_VAGONES_TOTAL = MAX_VAGONES_POR_LOCOMOTORA * CANT_MAX_LOCOMOTORAS;

struct Locomotora {
    std::string id;
    std::string conductor;
};

struct Vagon {
    std::string id;
    TipoVagon tipo;
    unsigned peso_llevado; //Solo lo uso si es de carga.
};

struct Formacion {
    Locomotora locomotoras[CANT_MAX_LOCOMOTORAS];
    int cant_locomotoras = 0;

    Vagon vagones[CANT_MAX_VAGONES_TOTAL];
    int cant_vagones = 0;

    unsigned peso_total_carga = 0;
};

//Según la demanda máxima calculada:
const int MAX_FLOTA_LOCOMOTORAS_PASAJEROS = 14; 
const int MAX_FLOTA_VAGONES_PASAJEROS = 140; //14 formaciones * 10 vagones
const int MAX_FLOTA_LOCOMOTORAS_CARGA = 8;   //4 formaciones que llevan dos locomotoras
const int MAX_FLOTA_VAGONES_CARGA = 80;      //4 formaciones * 20 vagones maximo

int main(){

Locomotora taller_locomotoras_pasajeros[MAX_FLOTA_LOCOMOTORAS_PASAJEROS];
Vagon taller_vagones_pasajeros[MAX_FLOTA_VAGONES_PASAJEROS];

Locomotora taller_locomotoras_carga[MAX_FLOTA_LOCOMOTORAS_CARGA];
Vagon taller_vagones_carga[MAX_FLOTA_VAGONES_CARGA];

Formacion formaciones_activas[18]; //14 de pasajeros y 4 de Carga

}