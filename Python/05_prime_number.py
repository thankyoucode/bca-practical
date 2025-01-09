import time


def is_prime(number: int) -> bool:
    if number <= 1:
        return False
    for i in range(2, number):
        if number % i == 0:
            return False
    return True


def prime_numbers(count: int) -> list:
    primes: list = []
    number = 2
    while count > 0:
        if is_prime(number):
            count -= 1
            primes.append(number)
        number += 1

    return primes


def is_prime_smart(number: int, primes: list[:int]) -> bool:
    if number <= 1:
        return False
    for i in primes:
        if number % i == 0:
            return False
    return True


def prime_numbers_smart(count: int) -> list:
    if count < 1:
        raise ValueError("Invalid value, count always more than zero (count > 0)")
    primes: list = [2]
    count -= 1
    number = 3
    while count > 0:
        if is_prime_smart(number, primes):
            count -= 1
            primes.append(number)
        number += 2

    return primes


def process_time(func, count: int) -> None:
    start = time.process_time()
    primes = func(count)
    end = time.process_time()

    print(f"""Process Time: {end-start},
        Primes: {primes}
        """)


count: int = 3000
process_time(prime_numbers_smart, count)
process_time(prime_numbers, count)
