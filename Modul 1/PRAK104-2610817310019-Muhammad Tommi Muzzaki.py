item_A = 400000
item_B = 350000
discount_A = 13
discount_B = 21
price_A = item_A - item_A * (discount_A/100)
price_B = item_B - item_B * (discount_B/100)

print(f"Harga sepatu A adalah {item_A}")
print(f"Harga sepatu B adalah {item_B}")
print(f"Sepatu A mendapat diskon {discount_A}% sehingga harganya menjadi {price_A:.0f}")
print(f"Sepatu B mendapat diskon {discount_B}% sehingga harganya menjadi {price_B:.0f}")


