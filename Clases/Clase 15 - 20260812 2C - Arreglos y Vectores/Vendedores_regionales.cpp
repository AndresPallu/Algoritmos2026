#include <iostream>
#include <array>

void CargarTotales(std::istream& in, std::array<unsigned, 3>& totVendedores, std::array<unsigned, 4>& totRegiones);


int main() {
    std::array<unsigned, 3> totalVendedores = {}; // 3 vendedores
    std::array<unsigned, 4> totalRegiones = {};   // 4 regiones

    CargarTotales(std::cin, totalVendedores, totalRegiones);

    for (auto e : totalVendedores)
    std::cout << e;

    return 0;
}

void CargarTotales(std::istream& in, std::array<unsigned, 3>& totVendedores, std::array<unsigned, 4>& totRegiones) {
    // Lectura continua con for
    for (unsigned v, r, importe; in >> v >> r >> importe; ) {
            totVendedores.at(v - 1) += importe;
            totRegiones.at(r - 1) += importe;
        }
    }
