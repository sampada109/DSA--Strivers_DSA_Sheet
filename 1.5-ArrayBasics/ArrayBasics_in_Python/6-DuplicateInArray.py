def findDuplicate(arr):
    
    ans = 0

    for i in range(len(arr)):
        ans = ans ^ arr[i]

    for i in range(1,len(arr)):
        ans = ans ^ i

    return ans 


arr = [6,3,1,5,4,3,2]

print(findDuplicate(arr))