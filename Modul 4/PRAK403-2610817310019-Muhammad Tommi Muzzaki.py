n1 = int(input("Angka ke 1: "))
n2 = int(input("Angka ke 2: "))

if n1 < n2:
    step = 1
else:
    step = -1

for i in range(abs(n1-n2) + 1):
    if i > 0:
        print(" - ", end=" ")
    print(n1 + i * step, n2 - i * step, end=" ")
print()

