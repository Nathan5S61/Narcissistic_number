for num in range(1000,10000):
    a = num // 1000
    b = (num // 100) % 10
    c = (num // 10) % 10
    d = num % 10
    if a**4+b**4+c**4+d**4==num:
        print (num)
