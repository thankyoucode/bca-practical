from functools import reduce  # use in function "sum_with_reduce()"


def sum_with_for_loop(numbers):
    total = 0
    for number in numbers:
        total += number
    return total


def sum_with_recursion(numbers, index=0):
    if index == len(numbers):
        return 0
    else:
        return numbers[index] + sum_with_recursion(numbers, index + 1)


def sum_with_while_loop(numbers):
    total, i = 0, 0
    while i < len(numbers):
        total += numbers[i]
        i += 1
    return total


def sum_with_generator_expression(numbers):
    return sum(num for num in numbers)


def sum_with_builtin_function(numbers):
    return sum(numbers)


def sum_with_reduce(numbers):
    return reduce(lambda x, y: x + y, numbers)


def sum_with_list_comprehension(numbers):
    return sum([num for num in numbers])


numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]

print(sum_with_for_loop(numbers))
print(sum_with_recursion(numbers))
print(sum_with_while_loop(numbers))
print(sum_with_generator_expression(numbers))
print(sum_with_builtin_function(numbers))
print(sum_with_reduce(numbers))
print(sum_with_list_comprehension(numbers))
