#Swap two numbers (without using third variable)
num1 = int(input("enter first number"))
num2 = int(input("enter second number"))

print("Before swap")
print("first number =",num1)
print("second number =",num2)

num1 = num1 ^ num2
num2 = num1 ^ num2
num1 = num1 ^ num2

print("After swap")
print("first number =",num1)
print("second number =",num2)