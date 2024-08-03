def count_digits(n):
    count = 0
    rem = n
    while(rem != 0):
        temp = rem % 10
        rem = rem//10
        if(temp>0 and n%temp==0):
            count +=1
    
    return count


n = int(input("Enter Digit N : "))

print(count_digits(n))