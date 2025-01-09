# PI * r^2
from math import pi, pow


def circle_area(r: int) -> float:
    return pi * pow(r, 2)


print(circle_area(1))
print(circle_area(5000))
print(circle_area(12342))
