n = int(input("Enter Row Size N : "))

for i in range(1,n+1):
    # left space
    for j in range(n-i):
        print(" ", end=" ")
    
    # star 
    for l in range(1,(i*2)):
        print("*",end=" ")

    print('\n')