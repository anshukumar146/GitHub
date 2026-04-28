#Function to sort a numbers without using sort()

n= int(input("Enter number of elements:"))

arr = []
print("Enter elements:")
for i in range (0 , n) :
    arr.append(int(input()))

def sort_array(arr, n):
    for i in range(n-1):         
        for j in range(n-i-1):    
            if arr[j] > arr[j+1]: # swap if left > right
                temp = arr[j+1]
                arr[j+1] = arr[j]
                arr[j] = temp


sort_array(arr, n)

print("Sorted in ascending order")
for i in arr:
    print(i)