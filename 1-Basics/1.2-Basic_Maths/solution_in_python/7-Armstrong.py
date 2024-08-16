def check_armstrong(n):
    d = len(str(n))

    sum = 0

    temp = n

    while(temp>0):
        last = temp % 10
        sum += pow(last, d)
        temp = temp // 10

    return(sum==n)


n = int(input("Enter Number N : "))
print(check_armstrong(n))