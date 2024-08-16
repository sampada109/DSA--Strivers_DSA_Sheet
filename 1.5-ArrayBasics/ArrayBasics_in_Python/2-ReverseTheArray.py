def printArray(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print('\n')

def reverseArray(arr):
    start = 0
    end = len(arr) - 1

    while(start <= end):
        arr[start], arr[end] = arr[end], arr[start]
        start += 1
        end -= 1


arr = [10,9,8,7,6]

brr = [55,54,53,52,51,50]

reverseArray(arr)

reverseArray(brr)

printArray(arr)

printArray(brr)
