vowels = "aeiou"

def count_vowels(line:str)->int:
    line_no_vowels = ''.join(c for c in line if c not in vowels)
    return len(line) - len(line_no_vowels)


with open("21_the_life.txt", 'r') as life:
    for line in life:
        if line == "\n":
            continue
        print(f"vowels are {count_vowels(line)} \n\t{line}")