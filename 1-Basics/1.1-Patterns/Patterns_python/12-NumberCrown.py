n = int(input("Enter Max Number N : "))

for i in range(1,n+1):
    for j in range(1,i+1):
        print(j, end=" ")
    for k in range(((n*2)-(i*2)),0,-1):
        print(" ",end=" ")
    for m in range(i,0,-1):
        print(m, end=" ")
    print('\n')  