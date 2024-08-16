def uniqueOccurance(arr):
    occr_dic = dict()

    for i in arr:
        occr_dic[i] = arr.count(i)
    
    st = set()

    for i in occr_dic:
        frq = occr_dic[i]
        if(frq in st):
            return False
        else:
            st.add(frq)

    return True


arr = [1,2,2,3,3,2]

ans = uniqueOccurance(arr)

print(ans)