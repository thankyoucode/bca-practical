a = 111
b = 222

# normal swap that simply used
temp = a
a = b
b = temp

print(f"a: {a}, b: {b}")

# bit swap
a = a ^ b
b = a ^ b
a = a ^ b

print(f"a: {a}, b: {b}")

# python swap
a, b = b, a

print(f"a: {a}, b: {b}")
