def ascend_descend(numbers: list[:int]) -> None:
    numbers.sort()
    print(numbers)
    print(numbers[::-1])


ascend_descend([4, 25, 42, 342, 92, 4, 923, 10, 30, 20])
