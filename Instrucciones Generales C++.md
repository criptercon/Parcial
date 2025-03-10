# Documentación C++

## Descripción
Este programa calcula la cantidad de daño recibido por un personaje en función del ataque mágico inicial y la resistencia mágica del personaje. Dependiendo del valor de la resistencia, el daño final se ajusta según las reglas establecidas en el código.

## Comentarios explicativos
- Se solicita al usuario la cantidad de ataque mágico (d) y la resistencia mágica (r) mediante `cin`.
- Se valida que la resistencia mágica esté dentro del rango permitido (0 a 100).
- Se aplican diferentes cálculos para determinar el daño final dependiendo del rango de resistencia mágica.

## Instrucciones de Ejecución en Visual Studio Code
### Configuración inicial
1. **Instalar Visual Studio Code** desde [https://code.visualstudio.com/](https://code.visualstudio.com/).
2. **Instalar MinGW (Windows)** si no lo tienes:
   - Descarga MinGW desde [https://sourceforge.net/projects/mingw-w64/](https://sourceforge.net/projects/mingw-w64/).
   - Agrega la ruta de `bin` (por ejemplo, `C:\MinGW\bin`) a las variables de entorno.
3. **Instalar la extensión de C/C++** en Visual Studio Code.
4. **Instalar la extensión Code Runner** para ejecutar el código fácilmente.
5. **Configurar el compilador**:
   - Abre VS Code y presiona `Ctrl + Shift + P`.
   - Escribe `C/C++: Edit Configurations (UI)` y selecciona el compilador `g++`.
6. **Elegir tu archivo en visual studio code y oprimir f6**.
7. **Ingresar los valores solicitados** cuando el programa lo pida.

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
    // Solicitar la cantidad de daño del ataque mágico (d) y la resistencia mágica (r)
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

