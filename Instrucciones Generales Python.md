# Instrucciones Generales Python

## Descripción

Este programa calcula la cantidad de daño recibido por un personaje en función del ataque mágico inicial y la resistencia mágica del personaje. Dependiendo del valor de la resistencia, el daño final se ajusta según las reglas establecidas en el código.

## Comentarios Explicativos

- Se solicita al usuario la cantidad de ataque mágico (d) y la resistencia mágica (r) mediante la función `input()`.
- Se valida que la resistencia mágica esté dentro del rango permitido (0 a 100).
- Se aplican diferentes cálculos para determinar el daño final dependiendo del rango de resistencia mágica.

## Instrucciones de Ejecución

### Windows, macOS y Linux

1. Asegúrese de tener instalado Python (versión 3 o superior).
2. Guarde el código en un directorio.
3. Abra una terminal o consola de comandos en el directorio donde se encuentre el archivo del código.
4. Ejecute el siguiente comando:
   ```sh
   python (nombre del archivo).py
   ```
5. Ingrese los valores solicitados cuando el programa lo pida.

## Ejemplo de Uso

```
Ingresa la cantidad del ataque mágico en puntos de daño: 100
Ingresa la resistencia mágica del personaje en porcentaje: 50
El personaje recibe 50.00 de daño total.
```

## Código Fuente

```python
# Solicitar la cantidad de daño del ataque mágico (d) y la resistencia mágica (r)
d = int(input("Ingresa la cantidad del ataque mágico en puntos de daño: "))
r = int(input("Ingresa la resistencia mágica del personaje en porcentaje: "))

# Validación de la resistencia mágica
desde 0 hasta 100
if r < 0 or r > 100:
    print("Error, la resistencia mágica debe ser un número entre 0 y 100.")
elif r >= 75:
    print(f"El personaje recibe {d - d * 0.9:.2f} de daño total.")
elif r >= 50:
    print(f"El personaje recibe {d - d * r * 0.01:.2f} de daño total.")
else:
    print(f"El personaje recibe {d - d * 0.3:.2f} de daño total.")
```
