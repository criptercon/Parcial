# Instrucciones Generales C++

## Descripción
Este programa calcula la cantidad de daño recibido por un personaje en función del ataque mágico inicial y la resistencia mágica del personaje. Dependiendo del valor de la resistencia, el daño final se ajusta según las reglas establecidas en el código.

## Comentarios explicativos
- Se solicita al usuario la cantidad de ataque mágico (d) y la resistencia mágica (r) mediante `cin`.
- Se valida que la resistencia mágica esté dentro del rango permitido (0 a 100).
- Se aplican diferentes cálculos para determinar el daño final dependiendo del rango de resistencia mágica.

## Instrucciones de Ejecución
### Windows, macOS y Linux
1. Asegúrese de tener instalado un compilador de C++ (como g++ de MinGW o GCC).
2. Guarde el código en un directorio.
3. Extraiga el código y fíjese en el nombre del archivo.
4. Abra una terminal o consola de comandos en el directorio donde se encuentre el archivo del código.
5. Compile el código con el siguiente comando:
   ```sh
   g++ calculo_dano.cpp -o calculo_dano
   ```
6. Ejecute el programa con:
   ```sh
   ./calculo_dano  # En Linux/macOS
   calculo_dano.exe  # En Windows
   ```
7. Ingrese los valores solicitados cuando el programa lo pida.

## Ejemplo de Uso
```
Ingresa la cantidad del ataque mágico en puntos de daño: 100
Ingresa la resistencia mágica del personaje en porcentaje: 50
El personaje recibe 50.00 de daño total.
```

## Código Fuente
```cpp
#include <iostream>
using namespace std;

int main() {
    // Solicitar la cantidad de daño del ataque mágico (D) y la resistencia mágica (r)
    int d, r;

    cout << "Ingresa la cantidad del ataque mágico en puntos de daño: ";
    cin >> d;
    
    cout << "Ingresa la resistencia mágica del personaje en porcentaje: ";
    cin >> r;

    // Comparar la cantidad de daño y la resistencia mágica para calcular el daño final
    if (r < 0 || r > 100) {
        cout << "Error, la resistencia mágica debe ser un número entre 0 y 100." << endl;
    } else if (r >= 75) {
        cout << "El personaje recibe " << d - d * 0.9 << ".00 de daño total." << endl;
    } else if (r >= 50 && r < 75) {
        cout << "El personaje recibe " << d - d * r * 0.01 << ".00 de daño total." << endl;
    } else {
        cout << "El personaje recibe " << d - d * 0.3 << ".00 de daño total." << endl;
    }
}
```
