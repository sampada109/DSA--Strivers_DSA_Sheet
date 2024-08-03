def Reverse_number(n):
    sign = 1 if n>0 else -1
    num = 0
    rem = abs(n)
    while(rem != 0):
        last = rem%10
        num = (num*10) + last
        rem = rem//10
    
    return sign*num


n = int(input("Enter NUmber N : "))

print(Reverse_number(n))