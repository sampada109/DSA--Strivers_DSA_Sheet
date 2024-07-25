n = int(input("Enter Row Size N : "))

#upper pyramid
for i in range(1,n+1):
    #left space
    for j in range(n-i):
        print(" ", end="")
    #star
    for k in range((2*i)-1):
        print("*", end="")
    print("\n")


#lower pyramid
for i in range(n,0,-1):
    #left space
    for j in range(n-i):
        print(" ", end="")
    #star
    for k in range((2*i)-1):
        print("*", end="")
    print("\n")