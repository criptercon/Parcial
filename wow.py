#Solicitar la cantidad de daño del ataque mágico (D) y la resistencia mágica (r)
d = int(input("Ingresa la cantidad del ataque mágico en puntos de daño: "))
r = int(input("Ingresa la resistencia mágica del personaje en porcentaje: "))

#Aca se compara cantidad de daño y la resistencia mágica para dar un resultado
if r < 0 or r > 100:
    print("Error, la resistencia mágica debe ser un número entre 0 y 100.")
elif r >= 75:
    print(f"El personaje recibe {d - d * 0.9:.2f} de daño total.")
elif r >= 50:
    print(f"El personaje recibe {d - d * r * 0.01:.2f} de daño total.")
else:
    print(f"El personaje recibe {d - d * 0.3:.2f} de daño total.")
