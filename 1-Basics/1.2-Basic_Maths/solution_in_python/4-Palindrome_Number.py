def check_palindrome(n):
    if(n<0):
        return False
    
    num = 0
    rem = n

    while(rem != 0):
        last = rem%10
        num = (num*10) + last
        rem = rem//10

    return (num==n)


n = int(input("Enter Digit N : "))

print(check_palindrome(n))