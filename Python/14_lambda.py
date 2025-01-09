def lambda_operations():
    # Original unsorted numbers
    numbers = [5, 2, 9, 1, 7, 4, 8, 3, 6, 10]

    # 1. Filter Even Numbers
    even_numbers = list(filter(lambda x: x % 2 == 0, numbers))
    print("Original Numbers:", numbers)
    print("Even Numbers:", even_numbers)

    # 2. Map Squared Numbers
    squared_numbers = list(map(lambda x: x**2, numbers))
    print("Squared Numbers:", squared_numbers)

    # 3. Sorted with Lambda
    sorted_numbers = sorted(numbers, key=lambda x: x)
    print("Sorted Numbers:", sorted_numbers)

    # 4. Complex Example: Filter Even, Square, and Sort
    complex_result = sorted(
        list(map(lambda x: x**2, filter(lambda x: x % 2 == 0, numbers)))
    )
    print("Complex Result (Even Squared Sorted):", complex_result)


# Run the function
lambda_operations()
