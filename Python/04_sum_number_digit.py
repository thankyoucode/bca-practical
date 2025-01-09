def sum_digit(number):
    # handle negative number
    if number < 0:
        number = abs(number)
    total = 0
    while number > 0:
        total += round(number % 10)
        number /= 10
    return total


print(sum_digit(123))
print(sum_digit(0))
print(sum_digit(-123))
print(sum_digit(-123.7))
