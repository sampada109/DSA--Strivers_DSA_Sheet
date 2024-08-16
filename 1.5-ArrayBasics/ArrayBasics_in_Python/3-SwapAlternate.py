def printArray(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print('\n')

def swapAlternate(arr):
    i = 0

    while(i+1<len(arr)):
        arr[i], arr[i+1] = arr[i+1], arr[i]
        i += 2


arr = [1,2,3,4,5,6]
brr = [1,2,3,4,5]

swapAlternate(arr)
swapAlternate(brr)

printArray(arr)
printArray(brr)