n = int(input("Enter Row Size N : "))

for i in range(n,0,-1):

    # left space 
    for j in range(n-i):
        print(" ", end="")
    
    # star 
    for l in range((i*2)-1):
        print("*", end="")

    print("\n")