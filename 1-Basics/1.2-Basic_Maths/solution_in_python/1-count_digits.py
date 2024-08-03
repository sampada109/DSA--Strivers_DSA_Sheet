def count_digit(n):
    count = 0
    while(n>0):
        count += 1
        n = n//10
    return count


n = int(input("Enter Digit N : "))

print(count_digit(n))