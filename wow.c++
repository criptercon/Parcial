#include <iostream>
using namespace std;

int main() {
    //Solicitar la cantidad de daño del ataque mágico (D) y la resistencia mágica (r)
    int d, r;

    cout << "Ingresa la cantida del ataque magico en puntos de daño: ";
    cin >> d;
    
    cout << "Ingresa la resistencia magica del personaje en porcentaje: ";
    cin >> r;

    //Aca se compara cantidad de daño y la resistencia mágica para dar un resultado
    if (r < 0 || r > 100) {
        std::cout << "Error, la resistencia mágica debe ser un número entre 0 y 100." << std::endl;
    }else if (r >= 75) {
        std::cout << "El personaje recibe, " << d - d * 0.9 << ".00 de daño total" << std::endl;
    }else if (r >= 50 && r < 75) {
        std::cout << "El personaje recibe, " << d - d * r * 0.01 << ".00 de daño total" << std::endl;
    }else{
        std::cout << "El personaje recibe, " << d - d * 0.3 << ".00 de daño total" << std::endl;
    }
}