def linearSearch(arr,s):

    if s in arr:
        return True
    else:
        return False
    

arr = list(map(int, input('Enter 5 element in array').split()))

s = int(input("element to be searched ? "))

ans = linearSearch(arr, s)

if ans:
    print("present in array")
else:
    print("not present in array")