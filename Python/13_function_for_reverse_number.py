# Write a function reverse_number(n) that returns the digits of n in reverse order.

num1 = int(input("Enter a number: "))

def reverse_number(n):
    reverse = 0

    while n != 0:
        remainder = n % 10
        reverse = reverse * 10 + remainder
        n //= 10

    return reverse

result = reverse_number(num1)
print("Reversed number =", result)