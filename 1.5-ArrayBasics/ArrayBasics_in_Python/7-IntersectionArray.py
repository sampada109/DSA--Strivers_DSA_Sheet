def interSection(arr1, arr2):

    n = len(arr1)
    m = len(arr2)

    ans = []

    i, j = 0, 0

    while( i < n and j < m):
        if( arr1[i] < arr2[j]):
            i += 1
        elif( arr1[i] == arr2[j] ):
            ans.append(arr1[i])
            i += 1
            j += 1
        else:
            j += 1

    return ans


arr1 = [1,4,5]
arr2 = [3,4,5]

ans = interSection(arr1, arr2)

print(ans)