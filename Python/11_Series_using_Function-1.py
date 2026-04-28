''' a python code to print sum of given series using function:
        1+3!+5!+7!+9!+……..upto n! '''


n = int(input("Enter limit:"))



def fact(num):
    f = 1
    for i in range (1 , num+1 , 1) :
        f *= i
    return f




def series(n):
    sum = 0
    for i in range (1 , n+1 , 2) :
        sum += fact(i)
    return sum 

result = series(n)
print("Sum of series:", result)