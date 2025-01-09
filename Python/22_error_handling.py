def calculate_average(numbers):
    total = 0
    for i in range(len(numbers)):
        total += numbers[i]
    try:
        average = total / len(numbers)  # Potential ZeroDivisionError
        return average
    except ZeroDivisionError:
        print("Can not divide by zero!")


def main():
    try:
        user_input = input("Enter numbers separated by spaces: ")
        numbers = [int(x) for x in user_input.split()]  # Potential ValueError

        result = calculate_average(numbers)
        print("Average is:", result)

    except ValueError:
        print("Invalid input! Please enter numbers only.")


if __name__ == "__main__":
    main()
