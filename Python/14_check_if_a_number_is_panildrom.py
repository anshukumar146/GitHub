#Function to check if a number is panildrom or not.

def panildrom(n):
 rev = 0
 while(n != 0):
   d=n % 10
   rev = rev*10 + d
   n = n // 10
 return(rev)

def check(res,num1):
 if(res == num1):
  print("The number is a panildrom")
 else:
  print("The number is not a panildrom")


num1 = int(input("Enter a number:"))
res = panildrom(num1)
check(res,num1)

