for num in range(10000,100000):
    a = num // 10000
    b = (num // 1000) % 10
    c = (num // 100) % 10
    d = (num // 10) % 10
    e = num % 10
    if a**5+b**5+c**5+d**5+e**5==num:
        print (num)
