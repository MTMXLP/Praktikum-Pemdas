ROWS = 5
COLS = 5

letter_I = [
    [0, 1, 1, 1, 0],
    [0, 0, 1, 0, 0],
    [0, 0, 1, 0, 0],
    [0, 0, 1, 0, 0],
    [0, 1, 1, 1, 0]
]

letter_T = [
    [1, 1, 1, 1, 1],
    [0, 0, 1, 0, 0],
    [0, 0, 1, 0, 0],
    [0, 0, 1, 0, 0],
    [0, 0, 1, 0, 0]
]

letter_BLANK = [
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0],
    [0, 0, 0, 0, 0]
]

def map_letter_to_art(text):
    match text:
        case 'I' | 'i':
            return letter_I
        case 'T' | 't':
            return letter_T
        case _:
            return letter_BLANK

def print_letters(text):
    for row in range(ROWS):
        for i in text:
            letter_art = map_letter_to_art(i)
            for col in range(COLS):
                if letter_art[row][col] == 1:
                    print("#", end="")
                else:
                    print(" ", end="")
            print("  ", end="")
        print("")

print_letters("TI")
