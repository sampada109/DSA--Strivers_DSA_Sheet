n = int(input("Enter Row Size N : "))


for i in range(1,n+1):
    c = 'A'
    # space
    for j in range(n-i):
        print(" ", end="")
    # left
    for k in range(i):
        print(c, end="")
        c = chr(ord(c)+1)
    # right
    for l in range(i-1,0,-1):
        print(chr(ord('A')+l-1), end="")
    
    print('\n')