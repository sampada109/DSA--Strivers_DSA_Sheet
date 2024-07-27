n = int(input("Enter Row Size N : "))

for i in range(n,0,-1):
    c = 'A'
    for j in range(i):
        print(c, end=" ")
        c = chr(ord(c) + 1)
    print('\n')