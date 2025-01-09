# sequence[::-1] it reverse any sequence data
# like string, list, tuple

# using string
def is_palindrome(n):
    return str(n) == str(n)[::-1]


print(is_palindrome(121))
print(is_palindrome(12.21))
print(is_palindrome(12.41))
