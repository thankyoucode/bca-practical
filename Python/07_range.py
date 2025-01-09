# print all odd number 1 to 30 using range

# one line method
print(list(range(1, 30, 2)))


# range core concept: core implementation of range
def my_range(start: int = 0, end: int = 0, increment: int = 1) -> list[:int]:
    result = []
    while start < end:
        result.append(start)
        start += increment
    return result


print(my_range(end=30))  # 0 to 30
print(my_range(20, 30))  # 20 to 30
print(my_range(1, 30, 2))  # 1 to 30 odd numbers
