#include <iostream>

unsigned SumarRec(std::istream& in, unsigned n);

int main(){
    std::cout << SumarRec(std::cin, 10);
}

unsigned SumarRec(std::istream& in, unsigned contador){ //No debo agregar otro parámetro ya que queda leyendo siempre
    
    if(contador==0) return 0;

    unsigned x;
    in >> x;

return SumarRec(in, contador-1) + x;
}
