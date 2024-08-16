def findUnique(arr):
    ans = 0
    for i in range(len(arr)):
        ans = ans^arr[i]

    return ans


arr = [23,2,56,23,56]

ans = findUnique(arr)

print("Unique element is : ", ans)