def is_armstrong(number: int) -> bool:
    total: int = 0
    this_number: int = number
    while this_number > 0:
        total += (this_number % 10) ** 3
        this_number //= 10
    if number == total:
        return True
    return False


def is_armstrong_reverse_approach(number: int) -> bool:
    this_number: int = number
    while number > 0:
        this_number -= (number % 10) ** 3
        number //= 10
    if this_number == 0:
        return True
    return False


print(is_armstrong(154))
print(is_armstrong(153))
print(is_armstrong_reverse_approach(154))
print(is_armstrong_reverse_approach(153))


for i in range(1000000):
    if is_armstrong(i):
        print(i)
    # if is_armstrong_reverse_approach(i):
    #     print(i)
