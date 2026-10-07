import math

base, height = 5, 12
hypotenuse = round(math.sqrt((base * base) + (height * height)))
print(f"Diketahui :")
print(f"Alas = {base} cm")
print(f"Tinggi = {height} cm\n")

print(f"Jawab :")
print(f"Sisi A = {height} cm")
print(f"Sisi B = {hypotenuse} cm")
print(f"Sisi C = {base} cm")
print(f"Keliling = {base + height + hypotenuse} cm")
print(f"Luas = {round(1/2 * base * height)} cm")
