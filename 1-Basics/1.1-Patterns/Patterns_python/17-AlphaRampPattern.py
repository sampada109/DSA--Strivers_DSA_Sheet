n = int(input("Enter Row Size N : "))


c = 'A'

for i in range(n):
    for j in range(i+1):
        print(c, end="")
    c = chr(ord(c) + 1)
    print('\n')