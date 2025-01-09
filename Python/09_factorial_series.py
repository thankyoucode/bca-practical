# loop method
def factorial(n: int):
    fact = 1
    while n > 0:
        fact *= n
        n -= 1
    return fact


# recursion method
# with some validation
def fact(n: int) -> list[:int]:
    if type(n) is not int:
        raise ValueError(f"n:number always be integer, but this is {type(n).__name__}")
    elif n < 0:
        raise ValueError("n:number can not be negative")
    if n == 0 or n == 1:
        return 1
    return n * fact(n - 1)


number = int(input("Factorial of: "))

print(factorial(number))
print(fact(number))
