a = 0
b = 1
series_length = 10

for _ in range(0, series_length):
    print(a, end=" ")
    a, b = b, a + b
