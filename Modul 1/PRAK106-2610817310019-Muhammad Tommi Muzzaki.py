a, b, c = 4, 8, 3
print(f"Variabel a bernilai {a}")
print(f"Variabel b bernilai {b}")
print(f"Variabel c bernilai {c}")
a_eq_b = int(a == b)
print(f"Apakah a sama dengan b ? jawabannya adalah {a_eq_b}")
b_gt_c = 1 if b >= c else 0
print(f"Apakah b lebih besar dari c ? jawabannya adalah {b_gt_c}")
print(f"Apakah a tidak sama dengan c ? jawabannya adalah ", end="")
print("1" if a != c else "0")
