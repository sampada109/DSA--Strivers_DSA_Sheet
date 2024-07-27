n = int(input("Enter Size N : "))

# starting digit according to row
for i in range(n):
    start = 0
    if(i%2 == 0):
        start = 1
    
    for i in range(i+1):
        print(start, end="")
        start = 1 - start
    print('\n')