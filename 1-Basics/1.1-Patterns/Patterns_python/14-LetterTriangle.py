n = int(input("Enter Row Size N : "))

for i in range(n):
    for j in range(i+1):
        print(chr(j+65), end=" ")
    print('\n')